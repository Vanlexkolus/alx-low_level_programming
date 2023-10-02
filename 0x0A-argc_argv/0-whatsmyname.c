#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name, without
 * having to compile it again
 * You should not remove the path before the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
