#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Pointer to the name of the file to append to.
 * @text_content: Pointer to a string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;
	int text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		return (1);
	}

	   while (text_content[text_length] != '\0')
text_length++;

	   bytes_written = write(fd, text_content, text_length);
	   if (bytes_written == -1 || bytes_written != text_length)
	   {
		   close(fd);
		   return (-1);
	}


	if (close(fd) == -1)
		return (-1);

	return (1);
}
