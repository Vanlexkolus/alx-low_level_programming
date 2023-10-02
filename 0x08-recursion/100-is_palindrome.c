#include "main.h"
#include <string.h>

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}
	return (0);
}
