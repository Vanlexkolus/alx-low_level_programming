#include <stdio.h>
#include <stdlib.h>

/**
Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2

if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;
	int c;
	char *d;
	
	for (c = 0; s1[c] != '\0'; c++)
	{
		a++;
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
		b++;
	}
	d = malloc(sizeof(char) * a + n);

	if (d == NULL)
	{
		return (NULL);
	}
	if (n >= b)
	{
		int H[] = *s1 + *s2;
	}
	else if (n < b)
	{
		for (c = 0; s1[c] != '\0'; c++)
		{
			H[c] = s1[c];
		}
		for (c = 0; n <= b; c++)
			{
				H[] = s2[c];
			}
	}
	return (0);
}
