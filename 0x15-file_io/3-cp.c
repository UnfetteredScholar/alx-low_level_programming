#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_to_buffer - reads from file into buffer
 * @file: the file descriptor
 * @buff: the buffer to store the chars
 * @letters: the number of characters to read
 *
 * Return: actual number of chars read or -1 if failed
 */
int read_to_buffer(int file, char *buff, int letters)
{
	int count = 0;

	count = read(file, buff, letters);
	if (count < 0)
	{
		return (-1);
	}
	buff[count] = '\0';
	return (count);
}

/**
 * write_to_file - writes from buffer to file
 * @file: the file descriptor
 * @buff: the buffer
 * @letters: length of the buffer
 *
 * Return: actual number of characters written or -1 on failure
 */
int write_to_file(int file, char *buff, int letters)
{
	int count = 0;

	count = write(file, buff, letters);
	if (count < 0)
		return (-1);
	return (count);
}

/**
 * _frw_error - prints file read or write error
 * @f: name of the file
 * @code: the exit code
 *
 * Return: void
 */
void _frw_error(char *f, int code)
{
	if (code == 98)
		dprintf(2, "Error: Can't read from file %s\n", f);
	else if (code == 99)
		dprintf(2, "Error: Can't write tp %s\n", f);
	exit(code);
}

/**
 * _fclose_error - prints fcolse error
 * @fd: the file descriptor
 *
 * Return: void
 */
void _fclose_error(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	close(100);
}

/**
 * main - copies content form one file to another
 * @argv: array of arguments
 * @argc: the number of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	char *buff = malloc(sizeof(char) * 1024);
	int count = 0, len = 0, fr = 0, fw = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (buff == NULL)
		return (0);
	fr = open(argv[1], O_RDONLY);
	fw = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fr < 0)
		_frw_error(argv[1], 98);
	if (fw < 0)
		_frw_error(argv[2], 99);
	while (1)
	{
		count = read_to_buffer(fr, buff, 1024);
		if (count < 0)
			_frw_error(argv[1], 98);
		if (count == 0)
			break;
		len = write_to_file(fw, buff, count);
		if (len == -1 || len != count)
			_frw_error(argv[2], 99);
	}
	if (close(fr) == -1)
		_fclose_error(fr);
	if (close(fw) == -1)
		_fclose_error(fw);
	return (0);
}
