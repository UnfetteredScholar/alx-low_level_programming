#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints all arguemnts regardless of type
 * @format: list of formats
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, valid = 0;
	char *s = NULL;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (valid)
			printf(", ");
		valid = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				valid = 0;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
