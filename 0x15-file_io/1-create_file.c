#include "main.h"

/**
 * create_file - a function that creates a new file.
 * @filename: pointer to filename
 * @text_content: string to be written to file
 * Return: success(1) or failure(-1)
 */

int create_file(const char *filename, char *text_content)
{
	int doc, u, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	doc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	
	if (doc == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		u = 0;
		while (text_content[u])
			u++;
		wr = write(doc, text_content, u);
		if (wr == -1 || wr != u)
		{
			close(doc);
			return (-1);
		}
	}
	close(doc);
	return (1);
}
