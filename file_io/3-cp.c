#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print an error message to stderr and exit with a specific code.
 * @exit_code: The exit code to use.
 * @format: The format string for the error message.
 * @value: The value to include in the message.
 */

void error_exit(int exit_code, const char *format, const char *value)
{
	dprintf(STDERR_FILENO, format, value);
	exit(exit_code);
}

/**
 * main - Entry point for the copy program.
 * @argc: The number of arguments.
 * @argv: The arguments array.
 *
 * Return: 0 on success, or exits with specific error codes on failure.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes == -1 || written_bytes != read_bytes)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", "file_from");
	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", "file_to");

	return (0);
}
