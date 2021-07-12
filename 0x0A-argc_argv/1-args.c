#include <stdio.h>

/**
 *main - program that prints the number of arguments passed into it
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0
 */

int main(int argc, char* argv[])
{
	int i;
	(void)argv;

	for(i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
