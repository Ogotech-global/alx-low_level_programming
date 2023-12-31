#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>                                                                                       
#include <unistd.h>
#include <fcntl.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
int cp_file(const char *file_from, const char *file_to);


#endif /* MAIN_H */

