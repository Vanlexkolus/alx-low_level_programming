#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: a pointer to the file name
 * @letters: number of characters
 * Return: size of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buffer;
	size_t totalRead = 0;
	size_t bytesRead;

	if (filename == NULL)
	{
		return (0);
	}
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		return (0);
	}

	buffer = (char *) malloc(letters);
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}

	while (totalRead < letters)
	{
		bytesRead = fread(buffer, 1, sizeof(buffer), fptr);

		if (bytesRead == 0)
		{
			break;
		}

		if (totalRead + bytesRead > letters)
		{
			bytesRead = letters - totalRead;
		}
		if (fwrite(buffer, 1, bytesRead, stdout) != bytesRead)
		{
			fclose(fptr);
			return (0);
		}
		totalRead += bytesRead;
	}
	fclose(fptr);
	free(buffer);
	return (totalRead);
}
