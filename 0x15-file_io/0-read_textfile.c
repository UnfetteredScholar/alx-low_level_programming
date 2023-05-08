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
	if (file == -1)
		return (0);

	BUFF = malloc(sizeof(char) * (letters));
	count = read(file, BUFF, letters);
	if (count == -1)
		return (0);

	if (write(1, BUFF, count) == -1)
		return (0);

	return (count);
}
