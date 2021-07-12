#include <stdio.h>

/**
 *main - the main function that prints the prog's name
 *
 *@argc: the argument count
 *@argv: the argument vector
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
