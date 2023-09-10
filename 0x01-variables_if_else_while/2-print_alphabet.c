#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: Always return 0
 */

int main(void)
{
	char X = 'a';

	while (X <= 'z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
