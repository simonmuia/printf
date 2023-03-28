#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int handle_print( va_list list, char buffer[], int flags, int width, int precision, int size);

#endif