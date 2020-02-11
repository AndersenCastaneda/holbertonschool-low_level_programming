#include "holberton.h"

/**
 * _abs - absolute number.
 * @n: number.
 * Return: Always 0.
 */

int _abs(int i)
{
	if (i < 0)
		return(i * (-1));
	else
		return (i);
}
