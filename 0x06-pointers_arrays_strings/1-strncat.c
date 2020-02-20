/**
 * _strncat - concatenates two strings
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] += src[j];
		j++;
		i++;
	}

	return (dest);
}