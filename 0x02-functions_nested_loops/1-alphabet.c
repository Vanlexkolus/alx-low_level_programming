#include"main.h"
/**
 * main - this code prints alphabets in small letters
 *
 * Return: always return zero
 */

void print_alphabet(void)

{

        char A = 'a';
	char Z = 'z';
	
        if (A <= Z)
	{
		_putchar(A);
		A++;
	}
	_putchar('\n');

}
