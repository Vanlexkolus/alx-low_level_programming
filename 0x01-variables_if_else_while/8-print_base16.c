#include <stdio.h>
/**
*main - This prints hex digits from
*
*Return: always return zero
*/

int main(void)
{
	char X = 'a';
	int D = 0;

	while (D <= 9)
	{
		putchar(D + '0');
		D++;
	}
	while (X <= 'f')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
