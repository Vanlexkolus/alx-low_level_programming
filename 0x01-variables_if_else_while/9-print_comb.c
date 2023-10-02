#include <stdio.h>
/**
 * main - This code prints all possible combination of a single digit
 *
 * Return: Return zero
 */

int main(void)
{
	int zero = 0;

	while (zero < 10)
	{
		putchar(zero + '0');
		zero++;
		if (zero < 10)
			putchar(',');
		putchar (' ');
		if (zero = 9)
			putchar('\n');
	}
	return (0);
}
