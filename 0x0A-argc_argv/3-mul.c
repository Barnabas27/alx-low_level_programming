#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 1
 */

int main(int argc, char **argv)
{
	int product, num1, num2;

	if (argc != 3)
		printf("Error\n");

	else
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		product = num1 * num2;

		printf("%d\n", product);
	}
	return (0);
}
