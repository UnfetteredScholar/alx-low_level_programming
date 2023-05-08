#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

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
 * append_text_to_file - appends text to a file
 * @filename: the file to append to
 * @text_content: the text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = 0, count = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_APPEND | O_RDWR);
	if (fp < 0)
		return (-1);
	if (len != 0)
	{
		count = write(fp, text_content, len);
		if (count != len)
			return (-1);
	}
	close(fp);
	return (1);
}
