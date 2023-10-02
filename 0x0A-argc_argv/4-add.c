#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: returns an integer
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *numStr = argv[i];
		int num = 0;
		int j = 0;

		while (numStr[j] != '\0')
		{
			if (numStr[j] < '0' || numStr[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (numStr[j] - '0');
			j++;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
