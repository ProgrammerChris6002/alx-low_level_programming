#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_usage_error(const char *program_name);
void print_read_error(const char *filename);
void print_write_error(const char *filename);
void print_close_error(int fd);
int main(int argc, char *argv[]);

#endif
