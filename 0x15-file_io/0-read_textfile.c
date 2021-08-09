#include "holberton.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: string pointer
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters
 *         0 if file cannot be opened, is NULL and if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_fun, write_fun;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);

	if (tmp == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_fun = read(fd, tmp, letters);

	if (read_fun == -1)
		return (0);

	write_fun =  write(STDOUT_FILENO, tmp, read_fun);

	if (write_fun == -1)
		return (0);
	close(fd);

	free(tmp);
	return (write_fun);
}
