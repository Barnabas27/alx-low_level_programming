#include <stdio.h>
#include <math.h>
#include "holberton.h"

/**
 *_pow_recursion - returns value of x raised to power of y
 *
 *@x: value to be evaluated
 *@y: power to lift a number to
 *
 *Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}

}
