#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: char one
 * @c: char two
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (NULL);
}
