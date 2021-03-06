/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 *         0 if b is NULL
 *         0 if b[i] != 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ui = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		ui = (ui * 2) + (b[i] - '0');
	}
	return (ui);
}
