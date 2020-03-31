#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int free_buffer(char *buffer);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
