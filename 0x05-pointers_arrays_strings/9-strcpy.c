/**
 * _strcpy - function that copy a string
 * @dest: variable to save the copy
 * @src: variable to copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = '\0';
	return (dest);
}
