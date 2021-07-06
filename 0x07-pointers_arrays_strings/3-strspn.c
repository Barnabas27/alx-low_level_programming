#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: string
 *@accept: second param
 *
 *Return: number of byte in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
