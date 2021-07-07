#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *factorial - returns factorial of a given number
 *
 *@n: given number
 *Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
