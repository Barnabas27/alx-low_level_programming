#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *
 *@s: string to be checked first occurence of any of the bytes
 *@accept: second param
 *
 *Return: pointer to the byte in s  that matches one of the bytes in accept, or
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);

	return (s);
}
