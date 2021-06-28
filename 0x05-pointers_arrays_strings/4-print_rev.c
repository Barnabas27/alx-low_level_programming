#include "holberton.h"
/**
 * print_rev - prints str in reverse
 *
 * @s: string to print in reverse
 *
 * Return: always void
 */
void print_rev(char *s)
{
	int i, strLength;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	strLength = i;
	i = 0;
	while (*(s + i) != '\0')
		_putchar(*(s + (strLength - (i++ + 1))));
	_putchar('\n');
}
