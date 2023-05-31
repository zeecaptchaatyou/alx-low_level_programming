#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	a = 'A';
	while (a <= 'Z')
	{

		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
