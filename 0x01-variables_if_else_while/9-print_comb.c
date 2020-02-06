#include <stdio.h>

/**
 * main - Description
 *
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 48; ch < 57; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}

	putchar(ch);
	putchar('\n');

	return (0);
}
