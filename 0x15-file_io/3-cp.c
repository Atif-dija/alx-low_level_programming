#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 *
 * @file: The name of the file
 *
 * Return: A pointer to the newly-allocated buffer
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file
 *
 * @fd: The file
 */

void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 *
 * @argc: The size of the argv
 * @argv: An array of size argc
 *
 * Return: Always 0
 * exit code 97 - If the argument count is incorrect
 * exit code 98 - If file_from does not exist or cannot be read
 * exit code 98 - If file_to cannot be created or written to
 * exit code 98 - If file_to or file_from cannot be closed
 */

int main(int argc, char **argv)
{
	int from_fd, to_fd, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	r = read(from_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to_fd, buffer, r);
		if (to_fd == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);
	return (0);
}
