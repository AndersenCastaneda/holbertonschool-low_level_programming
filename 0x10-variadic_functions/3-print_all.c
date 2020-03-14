#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i;
	char *str, *separator = "";

	va_start(args, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", separator, str);
				break;
			default:
				break;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
