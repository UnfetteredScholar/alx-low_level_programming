#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * standard output
 * @filename: the name of the file
 * @letters: the number of characters to print
 *
 * Return: actual number of characters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	ssize_t count = 0;
	char *BUFF = NULL;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	BUFF = malloc(sizeof(char) * (letters));
	if (BUFF == NULL)
		return (0);
	count = read(file, BUFF, letters);
	if (count < 0)
	{
		free(BUFF);
		return (0);
	}
	BUFF[count] = '\0';
	close(file);

	count = write(STDOUT_FILENO, BUFF, count);
	if (count < 0)
	{
		free(BUFF);
		return (0);
	}
	free(BUFF);
	return (count);
}
