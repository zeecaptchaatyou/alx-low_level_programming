#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimal number of coins required to make change
 * for an amount of money.
 * @argc: argument count.
 * @argv: arguments array of size argc
 * Return: 0 upon success.
*/
int main(int argc, char **argv)
{
int change = 0, money, i = 0;
int coins[6] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
money = atoi(argv[1]);
for ( ; coins[i] != '\0'; i++)
{
while (coins[i] <= money)
{
money -= coins[i];
change++;
}
}
printf("%d\n", change);
return (0);
}
