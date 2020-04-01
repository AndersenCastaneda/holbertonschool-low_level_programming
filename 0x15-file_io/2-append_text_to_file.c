#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the
 * end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file, _write, len = 0;

	if (!filename)
		return (-1);

	_file = open(filename, O_WRONLY | O_APPEND);
	if (_file == -1)
		return (-1);

	while (text_content && text_content[len])
		len++;

	if (text_content)
		_write = write(_file, text_content, len);

	if (_write != len)
	{
		close(_file);
		return (-1);
	}

	close(_file);
	return (1);
}
