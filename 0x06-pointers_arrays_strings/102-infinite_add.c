/**
 * infinite_add - add two numbers
 * @n1: first inputEdit
 * @n2: second input
 * @r: store add result
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, rmd = 0, s;
	char tmp;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	for ( ; i >= 0 || j >= 0; i--, j--, k++)
	{
		s = 0;
		if (i >= 0)
			s = s + (n1[i] - '0');
		if (j >= 0)
			s = s + (n2[j] - '0');
		s += rmd;
		if (s >= 10)
		{
			s -= 10;
			rmd = 1;
		}
		else
			rmd = 0;
		r[k] = s + '0';
	}
	if (rmd == 1)
		r[k - 1] = rmd + '0';
	r[k] = '\0';
	for (i = 0; i <= k; i++, k--)
	{
		tmp = r[i];
		r[i] = r[k - 1];
		r[k - 1] = tmp;
	}
	return (r);
}
