#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all string args
 * @separator: the separator between strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (n > 0)
	{
		va_start(strings, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(strings, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");

			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(strings);
	}
	printf("\n");
}
