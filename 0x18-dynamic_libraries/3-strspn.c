#include "main.h"

/**
 * _strspn - compares the input and print byte size
 * @s: char one
 * @accept: char two
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int b = 0;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				b++;
				break;
			}
			else if (accept[a + 1] == '\0')
			{
				return (b);
			}
		}
		s++;
	}
	return (b);
}
