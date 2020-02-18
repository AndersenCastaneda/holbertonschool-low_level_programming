/**
 * _strcpy - copy the pointer of a string to another pointer
 * @dest: input
 * @src: input
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do
	{
		*(dest + i) = *(src + i);
		i++;
	} while (src[i] != '\0');
	*(dest + i ) = '\0';

	return dest;
}
