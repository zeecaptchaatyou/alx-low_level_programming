#include <stdio.h>

/**
 * main - prints out the alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		_putchar(a);
		a--;
	}

	_putchar('\n');
	return (0);
}
