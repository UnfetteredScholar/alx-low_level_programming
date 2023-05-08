#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - creates a file and writes to it
 * @filename: name of the new file
 * @text_content: the text to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp = 0;
	int count = 0;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (len > 0)
		count = write(fp, text_content, len);
	if (count < 0)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
