

#include <stdio.h>

/**
 * main - prints out all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
