#include <stdio.h>
/**
 * main - This code prints all possible combination of a single digit
 *
 * Return: Return zero
 */

int main(void)
{
	char zero = 0;

	while (zero < 10)
	{
		putchar(zero + '0');
		zero++;
		if (zero < 10)
			putchar(',');
		putchar (' ');
	}
	return (0);
}
