#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>

#define USAGE "Usage: cp file_from file_to\n"
#define FILE_READ_ERROR "Error: Can't read from file %s\n"
#define FILE_WRITE_ERROR "Error: Can't write to %s\n"
#define FILE_CLOSE_ERROR "Error: Can't close fd  %d\n"
#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
