#include <stdio.h>
/**
 * main - This is void
 *
 * Return: alway return zero
 */

int main(void)
{
	int X = '0';

	while (X <= '9')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
