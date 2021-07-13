#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - prints program name
 *@argc: counts the arguments passed
 *@argv: array of pointers to pointers containing arguments passed
 *Return: int
 */

int main(int argc, char *argv[])
{
int j;
int i = 1;
int sum = 0;

if (argc == 0)
{
printf("0\n");
return (0);
}


for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);

	return (0);
}
