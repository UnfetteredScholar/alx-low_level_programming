#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all number arguments
 * @separator: the string to be printed between the numbers
 * @n: the number of arguemnts (numbers to print)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (n > 0)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(nums);
	}
	printf("\n");
}
