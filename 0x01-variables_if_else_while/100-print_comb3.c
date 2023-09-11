#include <unistd.h>
/**
 * main - prints double combo of numbers
 *
 * Return: always return void
 */

int main(void)
{
	char digit1 = '0';

	while (digit1 <= '8')

		char digi2 = digi1 + 1;
	while (digit2 <= '9')
	{
		write(1, &digit1, 1);
		write(1, &digit2, 1);

		if (digit1 != '8' || digit2 != '9')
		{
			write(1, ", ", 2);
		}
		digit2++;
	}
	digit1++;
	write(1, "\n"', 1);

	return (0);
}
