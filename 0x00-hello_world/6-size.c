#include <stdio.h>
/**
 * main - The main function is void
 *
 * Return: this returns 0 if there's no error in my code
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	fprintf(stderr, "[Anything] \n");
	return (0);
}
