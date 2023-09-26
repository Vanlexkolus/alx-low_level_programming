#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: the array
 * @src: array content
 * @n: number of times it's gonna show up
 * Return: scr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
	}
	return (src);
}
