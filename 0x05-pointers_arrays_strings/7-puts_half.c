#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 
  * puts_half - prints half of a string
 *
 * put-half @str: string parameter input
 *
 * puts-half Return: Nothing
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}

void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; ++l)
		;

	if (l % 2 == 0)
	{
		for (n = l / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
