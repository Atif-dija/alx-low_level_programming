#include "main.h"

/**
 * create_file -  creates a file
 *
 * @filename:  name of the file to create and text_content
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	wr = write(file, text_content, len);

	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}

