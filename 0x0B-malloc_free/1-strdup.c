#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this is a function that returns a pointer to a
 * newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str. Memory for the
 * new string is obtained with malloc, and can be freed with free.
 * @str: the main man haha
 * Return: NULL if str = NULL On success
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i;
	unsigned int b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
	{
		b++;
	}
	a = malloc((b + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= b; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
