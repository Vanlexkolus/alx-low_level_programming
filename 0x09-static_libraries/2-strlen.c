#include "main.h"

/**
 * _strlen - a function to retuen the length of a string
 * @s: character
 * Return: ls
 */

int _strlen(char *s)
{
	int ls = 0;

	while (*s != '\0')
	{
		ls++;
		s++;
	}
	return (ls);
}
