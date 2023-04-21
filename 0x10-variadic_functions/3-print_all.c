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
	char f;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		f = format[i];
		if (valid)
			printf(", ");
		valid = 1;
		switch (f)
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
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
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
