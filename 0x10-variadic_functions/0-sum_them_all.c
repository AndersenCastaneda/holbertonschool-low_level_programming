#include <stdarg.h>

/**
*sum_them_all - returns the sum of all its parameters
*@n: number of parameters
*Return: sum of n parameters or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int c = n;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (c--)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
