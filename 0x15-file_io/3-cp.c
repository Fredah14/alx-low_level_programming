#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_buffer - allocates 1024 bytes for a buffer.
 * @file: the file buffer storing chars for.
 *
 * Return: a pointer to the new buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Close file descriptor.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
int j;
j = close(fd);
if (j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 Always.
 *
 * Description: if argument number is not correct one, exit with code 97
 * If file_from does not exist or cannot be read, exit code 98.
 * If file_to cannot be created or written to, exit code 99.
 * If file descriptor cannot be closed, exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, x, y;
char *buffers;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffers = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
x = read(from, buffers, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || x == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffers);
exit(98);
}
y = write(to, buffers, x);
if (to == -1 || y == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffers);
exit(99);
}
x = read(from, buffers, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (x > 0);
free(buffers);
close_file(from);
close_file(to);
return (0);
}
