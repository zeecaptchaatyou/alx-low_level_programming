#include <stdio.h>
#include <stdlib.h>

int main (void)
{
char *s = "zeecaptcha";
char *z = (char *)malloc(20);
int i = 0;
z = s;
while (z[i] != '\0')
{
printf("%c", z[i]);
i++;
}
printf("\n%ld\n", sizeof(unsigned int));
return(0);
}
