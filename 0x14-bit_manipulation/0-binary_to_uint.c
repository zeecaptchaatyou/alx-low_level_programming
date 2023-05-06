#include "main.h"

/**
 * powZee - results in value of j raised to z
 * funfact: powZee stands for power of Zee!
 * @z: my first intial (unrelated) and the exponent
 * @j: my secong initial (still very much unrelated, lmao) and the base
 * Return: a result of type double or int ofc
*/

int powZee(int j, int z)
{
int i;
int result = 1;
for (i = z; i > 0; i--)
{
result *= j;
}
return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a strng of 0 and 1 chars
 * Return: converted number if successful, 0 if: b is NULL or
 * string contains chars that are not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
int i = 0, len = 0, total = 0, counter = 0;

/*Are you a null string?*/
if (b == NULL)
{
return (0);
}

/*Getting th length of string b*/
while (b[i] != '\0')
{
len++;
i++;
}

/* Checking for impostors within the string. 0 will be returned if there is*/
for (i = 0; i < len; i++)
{
if (!(b[i] == 48 || b[i] == 49))
{
counter++;
}
}
/*Sooo, do you habour impostors?*/
if (counter > 0)
{
return (0);
}
/*Welcome to the actual program*/
len -= 1; /*For the iterations*/
for (i = 0; i <= len; i++)
{
if (b[i] == 49)
{
total +=  (powZee(2, (len - i)));
}
}
return (total);
}
