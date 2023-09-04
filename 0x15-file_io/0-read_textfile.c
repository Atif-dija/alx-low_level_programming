#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of a file
 * @letters:  number of letters it should read and print
 *
 * Return: actual number of letters it could read and prin or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t actual_num;
	ssize_t size;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(letters);
	size = read(file, buffer, letters);
	actual_num = write(STDOUT_FILENO, buffer, size);

	free(buffer);
	close(file);
	return (actual_num);
}
