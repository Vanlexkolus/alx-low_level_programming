#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - Function to be executed before main
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

/**
 * main - prints the funtion
 * Return: nothing
 */

int main(void)
{
	printf("(A tortoise, having a pretty good sense of a hare's nature,\n"
		"challenges one to a race.)\n");
	return (0);
}
