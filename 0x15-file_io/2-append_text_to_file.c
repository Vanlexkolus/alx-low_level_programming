#include "main.h"

/**
 * append_text_to_file - a function to appends text at the end of a file
 * @filename: pointer to file
 * @text_content: string to append
 * Return: success(1) or failure(-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, append, index;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		index = 0;
		while (text_content[index])
			index++;

		append = write(file, text_content, index);
		if (append < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
