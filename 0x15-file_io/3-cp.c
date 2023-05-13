#include "main.h"
#define SIZEOFBUFFER 1024

/**
 * main - copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 upon success
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, num_read, num_written;
char buf[SIZEOFBUFFER];
if (argc != 3)
{
dprintf(STDERR_FILENO,"Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
while ((num_read = read(fd_from, buf, SIZEOFBUFFER)) > 0) {
num_written = write(fd_to, buf, num_read);
if (num_written != num_read) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}
if (num_read == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(fd_from) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
    
return (0);
}
