#include"main.h"
/**
 * main - this code prints alphabets in small letters
 *
 * Return: always return zero
 */

void print_alphabet(void)

{
	char A = 'a';
	
        if (A <= 'z')
	{
		_putchar(A);
		A++;
	}
	_putchar('\n');

}
