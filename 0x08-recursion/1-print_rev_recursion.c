#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *
 *@s: string to be printed in reverse
 *
 *Return: the reversed string.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}