#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - more headers goes there
 * Return: betty style doc for function main goes there
 *
 **/
int main(void)
{
	int n;
	int u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	u = n % 10;
	if (u > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, u);
	}
	if (u < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, u);
	}

	return (0);
}
