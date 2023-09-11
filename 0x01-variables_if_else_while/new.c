#include <stdio.h>

int main(void)
{
	int starting_num;
	char hex_char;

	starting_num = 0;
	hex_char = 'a';

	while (starting_num < 10)
	{
		putchar(starting_num + '0');
		starting_num++;
	}
	while (hex_char < 'g')
	{
		putchar(hex_char);
		hex_char++;
	}
	putchar('\n');
	return (0);
}
