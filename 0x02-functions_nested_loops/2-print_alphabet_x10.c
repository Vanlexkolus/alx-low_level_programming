#include "main.h"

void print_alphabet_x10(void)
{
	int J = 0;
	while (J <= 10)
	{
		int a = 'a';
		while (a <= 'z')
		{
			_putchar (a);
			a++;
		}
		J++;
		_putchar ('\n');
	}
}
