#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
  
    while (s1[len1])
    {
	    len1++;
    }

    while (s2[len2])
    {
	    len2++;
    }

    if (n >= len2)
    {
	    n = len2;
    }
    result = malloc(len1 + n + 1);

    if (result == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < len1; i++)
    {
        result[i] = s1[i];
    }

    for (i = 0; i < n; i++)
    {
        result[len1 + i] = s2[i];
    }

    result[len1 + n] = '\0';

    return (result);
}

