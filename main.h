#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int pow_num(int x, int y);
int _strlen(char *str);
int _printf(const char *format, ...);
char *print_char(va_list ap);
char *print_str(va_list ap);
char *print_int(va_list ap);
char *print_binary(va_list ap);
char *print_oct(va_list ap);
char *print_hex(va_list ap);
char *convert_int_to_str(int multiple, int length, int n);
char *_strcpy(char *dest, char *src);
char* (*select_func(char c))(va_list);
char *string_buffer(void);
void realloc_buffer(char *buffer, int len, va_list ap);
int buffer_overflow(char *buffer, int pos);

#endif
