#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file pointer.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int n, m,
len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
n = open(filename, O_WRONLY | O_APPEND);
m = write(n, text_content, len);
if (n == -1 || m == -1)
return (-1);
close(n);
return (1);
}
