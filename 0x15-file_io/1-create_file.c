
#include "main.h"


/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters thefunction should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r, o, w;
char *memory;

if (filename == NULL)
return (0);

memory = malloc(sizeof(char) * letters);
if (memory ==  NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, memory, letters);
w = write(STDOUT_FILENO, memory, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(memory);
return (0); }

free(memory);
close(o);

return (w);

}
