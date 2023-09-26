#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == *accept)
		{
			accept[b] = a;
			b++;
		}
	}
	return (b);
}
