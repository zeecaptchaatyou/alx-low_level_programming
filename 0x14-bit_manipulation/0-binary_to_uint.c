#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars, Mr Barbier said
 * Return: a size_t number the string isn't null or has a foreign char
*/
unsigned int binary_to_uint(const char *b)
{
size_t number = 0;
int i = 0, multiple = 1;

/*we don't want a NULL string......*/
if (b == NULL)
return (0);

/*.....or a contaminated one......*/

for ( ; b[i]; i++)
{
if (b[i] != 48 && b[i] != 49)
return (0);
}
/*but since this one is pure, let's check how long it is......*/
i = 0;
while (b[i])
i++;

/*and now we give each bit it's worth in tens, for the good shall be rewarded*/
for (i -= 1; i >= 0; i--, multiple *= 2)
{
if ((b[i] == 49))
number += multiple;
}
/*I am Stewie Griffin, and this has been wonderful.*/
return (number);
}
