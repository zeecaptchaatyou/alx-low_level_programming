#include "main.h"

/**
 * read_textfile - reads a text file and prints its content to stdout
 * @filename: pointer to file to be read, opened and printed
 * @letters: number of letter to be read and printed
 * Return: number of letters readable and printable
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
return (0);
}

free(memory);
close(o);

return (w);

}
