#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase
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

	_putchar('\n');
	return (0);
}
