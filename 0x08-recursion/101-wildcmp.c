#include "main.h"

/**
 * wildcmp - a function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0.
 * @s1: string one
 * @s2: string two
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
    /* base case: both strings are empty */
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    /* case: s2 contains a wildcard character */
    if (*s2 == '*')
    {
        /* case: s2 is only a wildcard character */
        if (*(s2 + 1) == '\0')
            return (1);

        /* case: s2 has more characters after the wildcard */
        /* recursively compare s1 and s2 + 1 until a match is found */
        if (*s1 != '\0' && wildcmp(s1 + 1, s2) == 1)
            return (1);
    }

    /* case: both strings have the same character */
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1)); /* recursively compare the rest of the strings */

    /* case: the strings are different */
    return (0);
}
