#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int _file1, _file2, _read = 1024, count = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	_file1 = open(argv[1], O_RDONLY);
	if (_file1 == -1)
		dprintf(STDERR_FILENO, FILE_READ_ERROR, argv[1]), exit(98);

	_file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (_file2 == -1)
		dprintf(STDERR_FILENO, FILE_WRITE_ERROR, argv[2]), exit(99);

	while (_read == BUFFER_SIZE)
	{
		_read = read(_file1, buffer, BUFFER_SIZE);
		if (_read == -1)
			dprintf(STDERR_FILENO, FILE_READ_ERROR, argv[1]), exit(98);

		count = write(_file2, buffer, BUFFER_SIZE);
		if (count == -1)
			dprintf(STDERR_FILENO, FILE_WRITE_ERROR, argv[2]), exit(99);
	}
	if (close(_file1) == -1)
		dprintf(STDERR_FILENO, FILE_CLOSE_ERROR, _file1), exit(100);

	if (close(_file2) == -1)
		dprintf(STDERR_FILENO, FILE_CLOSE_ERROR, _file2), exit(100);
	return (0);
}
