#include <stdio.h>
/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}

			_putchar(i);
			_putchar(j);

			if (i == 56 && j == 57)
			{
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return (0);
}
