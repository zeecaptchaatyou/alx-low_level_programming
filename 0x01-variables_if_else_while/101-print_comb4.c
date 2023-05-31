#include <stdio.h>

/**
 * main - prints out all possible combos of 3 digits
 * Return: 0
 */
int main(void)
{

	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{char *maskify (char *masked, const char *string)
{
	int i = 0;
  *masked = '\0'; // write to masked
	return masked; // return it
}
			for (k = j; k < 58; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				_putchar(i);
				_putchar(j);
				_putchar(k);

				if (i == 55 && j == 56 && k == 57)
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
	}
	_putchar('\n');
	return (0);
}
