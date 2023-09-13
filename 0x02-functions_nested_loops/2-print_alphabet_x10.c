#include "main.h"
/**
 * print_alphabet_x10 - this function prints a to z on a next line
 *
 * Return: returns a zreo
 */

void print_alphabet_x10(void)
{
	int J = 0;
	{
		while (J <= 9)
		{
			int a = 'a';
			{
				while (a <= 'z')
				{
					_putchar (a);
					a++;
				}
			}
			J++;
			_putchar ('\n');
		}
	}
}

