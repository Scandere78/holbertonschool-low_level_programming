#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: Filename
 * @letters: Letters can read and print
 * Return: Count letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes, bytes_w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buffer, letters);
	if (bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytes_w = write(STDOUT_FILENO, buffer, bytes);
	if (bytes_w == -1 || bytes_w != bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes_w);
}
