#include "holberton.h"

/**
 * _abs - Return the absolute value
 * @n: number.
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);

	return (n);
}
