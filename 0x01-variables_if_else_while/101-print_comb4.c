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
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = 47; j < 57; j++)
		{
			for (k = 46; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != 55 && j != 57 && k != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
