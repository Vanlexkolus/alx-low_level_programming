#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: a pointer to the file name
 * @letters: number of characters
 * Return: size of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	doc = open(filename, O_RDONLY);
	if (doc == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	rd = read(doc, buffer, letters);
	if (rd == -1)
		return (-1);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (0);
	close(doc);
	free(buffer);
	return (wr);
}
