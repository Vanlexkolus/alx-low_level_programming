#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: sting one
 * @s2: string two
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int i;
	char *z;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	z = malloc(sizeof(char) * a + b + 1);

	if (z == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		z[i] = s1[i];
	}
	for (i = 0; i < b; i++)
	{
		z[a + 1] = s2[i];
	}
	z[a + b] = '\0';
	return (z);
}
