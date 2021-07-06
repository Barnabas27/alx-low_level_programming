#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *_strstr - function that locates a substring
 *
 *@needle: substring
 *@haystack: string
 *
 *Return: pointer to the beginning fo the located substring or NULL if
 *substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);

	return (p);
}
