#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: Realocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i;
	unsigned int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	if (n >= s2_len)
		n = s2_len;
	m = malloc(s1_len + n + 1);
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		m[i + s1_len] = s2[i];
	}
	m[s1_len + n] = '\0';
	return (m);
}
