/**
 * _strcpy - function that copy a string
 * @dest: variable to save the copy
 * @src: variable to copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do {
		*(dest + i) = *(src + i);
		i++;
	} while (src[i] != '\0');

	return (dest);
}
