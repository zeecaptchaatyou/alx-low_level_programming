#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{

FILE *fd;
char name[4] = "Zee";
int age = 17;
fd = open ( "Home/example.txt", "w+");

if (fd == NULL)
{
putchar(49);
putchar('\n');
exit(1);
}
else 
{
fprintf(fd, "%s, %d", name, age);
fclose(fd);
}
return (0);
}