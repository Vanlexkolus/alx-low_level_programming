#include <stdio.h>
/**
 * main - The main function is void
 *
 * Return: this returns 0 if there's no error in my code
 */

int main(void)
{
    fprintf(stdout, "Size of a char: %lu byte(s)\n", sizeof(char));
    fprintf(stdout, "Size of an int: %lu byte(s)\n", sizeof(int));
    fprintf(stdout, "Size of a long int: %lu byte(s)\n", sizeof(long int));
    fprintf(stdout, "Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    fprintf(stdout, "Size of a float: %lu byte(s)\n", sizeof(float));

    return (0);
}
