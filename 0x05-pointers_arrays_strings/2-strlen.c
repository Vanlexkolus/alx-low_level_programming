#include "main.h"

/**
 *  _strlen - a function to list string length
 *
 * @s: character
 * Retun: lnt
 */

int _strlen(char *s)
{
	int lnt;

	while (lnt != '\0')
	{
		lnt++;
		s++;
	}
	return (lnt);
}
