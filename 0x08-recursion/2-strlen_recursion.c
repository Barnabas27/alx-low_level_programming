#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *_strlen_recursion - returns the length of string
 *
 *@s: string who's length is being returned.
 *Return: returns length of string
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
