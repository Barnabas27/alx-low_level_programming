#include "holberton.h"
#include <stdio.h>

/**
 *swap_int(int *a, int *b) - swaps the values of two integers.
 *@a: pointer to int a
 *@b: pointer to int b
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
