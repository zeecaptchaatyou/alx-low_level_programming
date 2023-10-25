#include "lists.h"

/**
 * main - generate a key depending on a username for crackme5
 * @argc: argument
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    size_t i, j;
	size_t len, add;
	char *str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char delim[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	delim[0] = str[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	delim[1] = str[(add ^ 79) & 63];
	for (i = 0, j = 1; i < len; i++)
		j *= argv[1][i];
	delim[2] = str[(j ^ 85) & 63];
	for (j = argv[1][0], i = 0; i < len; i++)
		if ((char)j <= argv[1][i])
			j = argv[1][i];
	srand(j ^ 14);
	delim[3] = str[rand() & 63];
	for (j = 0, i = 0; i < len; i++)
		j += argv[1][i] * argv[1][i];
	delim[4] = str[(j ^ 239) & 63];
	for (j = 0, i = 0; (char)i < argv[1][0]; i++)
		j = rand();
	delim[5] = str[(j ^ 229) & 63];
	printf("%s\n", delim);
	return (0);
}
