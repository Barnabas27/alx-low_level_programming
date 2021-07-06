#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *
 *@dest: destination where n bytes from src are copied
 *@src: source where n bytes are being copied from
 *@n: bytes from memory are src to memory area dest
 *
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
