#include <stdio.h>
/**
 * main - This is a void and i dont know why yet
 *
 * Return: Always return zero
 */

int main(void)
{
	char X = 'z';

	while (X >= 'a')
	{
		putchar(X);
		X--;
	}
	putchar('\n');
	return (0);
}
