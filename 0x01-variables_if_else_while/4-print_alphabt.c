#include <stdio.h>
/**
 * main - This is void
 *
 * Return: Will always return zero
 */

int main(void)
{
	char X = 'a';

	while (X <= 'z')
	{
		if (X != 'q' && X != 'e')
		putchar(X);
		putchar('\n');
		X++;
	}
	return (0);
}

