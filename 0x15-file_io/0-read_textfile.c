#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * if fails to open or read return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _file;
	ssize_t _read, _write;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename || !buffer)
		return (0);

	_file = open(filename, O_RDONLY);
	if (_file == -1)
		return (0);

	_read = read(_file, buffer, letters);
	if (_read == -1)
	{
		close(_file);
		free(buffer);
		return (0);
	}

	buffer[letters] = '\0';

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		close(_file);
		free(buffer);
		return (0);
	}

	close(_file);
	free(buffer);
	return (_write);
}
