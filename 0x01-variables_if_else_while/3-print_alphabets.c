#include <stdio.h>
/**
 * main - this is void
 *
 * Return: always return 0
 */

int main(void)
{
	char X = 'a';
	char Y = 'A';

	while (X <= 'z')
	{
		putchar(X);
		X++;
	}
	while (Y <= 'Z')
	{
		putchar(Y);
		Y++;
	}
	putchar('\n');
	return (0);
}

