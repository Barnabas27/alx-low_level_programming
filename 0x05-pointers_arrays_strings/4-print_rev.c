#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints a string, in reverse followed by a new line
 *
 *@s: string to be reversed.
 */

void print_rev(char *s)
{
	int i;
	int j;
	int last_char;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	last_char = i;

	j = (last_char - i);

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
