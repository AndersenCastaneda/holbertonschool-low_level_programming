#include <stdio.h>

/**
 * main - Description
 *
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (i + j != 114)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
