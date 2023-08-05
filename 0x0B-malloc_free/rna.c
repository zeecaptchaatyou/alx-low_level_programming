#include <stdio.h>
#include <stdlib.h>

int main (void)
{
char *s = "zeecaptcha";
char *z = (char *)malloc(20);
int i = 0, j = 10;
z = s;
while (z[i] != '\0')
{
printf("%c", z[i]);
i++;
}
for ( ; j == 10; j++)
printf("\n%ld\n", sizeof(unsigned int));
return(0);
}
