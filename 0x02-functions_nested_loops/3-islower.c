#include "holberton.h"
#include <ctype.h>

/**
 * _islower - chechk for lowercase character
 * @c: the character to check.
 * Return: 1 if c is lowercase, ) otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
