/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int xor = n ^ m;

	if (n == 0 && m == 0)
		return (0);

	for (i = 0; i <= 63; i++)
	{
		num = xor >> i;
		if (num & 1)
			count++;
	}

	return (count);
}