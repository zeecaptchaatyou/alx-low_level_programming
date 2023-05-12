#include "main.h"

/**
 * read_textfile - reads and writes a text file to the POSIX standard output
 * @letter: number of letters it should read and print
 * @filename: pointer to the file to be read
 * Return: if successful: actual number of letters it could read and print,
 * else: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file_descriptor, bytes_read, bytes_written;
char *buffer;
if (filename == NULL)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
return (0);

bytes_read = read(file_descriptor, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(file_descriptor);
return (0);
}
buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(file_descriptor);
return (0);
}
free(buffer);
close(file_descriptor);
return (bytes_written);
}
