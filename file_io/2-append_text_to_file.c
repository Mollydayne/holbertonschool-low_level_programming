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
    ssize_t bytes_written;
    

    if (filename == NULL)
        return (-1);

        
}