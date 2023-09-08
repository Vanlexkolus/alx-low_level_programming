#include <stdio.h>
/**
 * main - The main function is void
 *
 * Return: this returns 0 if there's no error in my code
 */

int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
