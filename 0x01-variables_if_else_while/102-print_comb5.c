#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
	int j, i;

	for (j = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if (i != j)
			{

				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
				_putchar(' ');
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);

				if (j * 100 + i != 9899)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}

	}
	_putchar('\n');
	return (0);
}
