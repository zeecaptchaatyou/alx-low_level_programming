#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char *j = "245";
int i = (*(j + 2) - 48);
int k = atoi("e");
int *p;
p = (int*)malloc(3 * sizeof(int)); 
*p = 10;
*(p + 1) = 5;
printf("p = %d\n", p[1]);
free(p);
p = (int*)malloc(sizeof(int)); 
*p = 20;
printf("p = %p\n", p);
printf("i = %d\nj = %s\n", k, j);
return (0);
}