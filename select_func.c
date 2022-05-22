#include "main.h"
/**
  * select_func - select and return the matched function
  * @c: argument parameter used to pick the function
  * Return: Pointer to picked function
  */

char* (*select_func(char c))(va_list)
{
	switch (c)
	{
	case 'c':
		return (print_char);
	case 's':
		return (print_str);
	case 'i':
	case 'd':
		return (print_int);
	case 'b':
		return (print_binary);
	case 'o':
		return (print_oct);
	case 'x':
	case 'X':
		return (print_hex);
	default:
		return (NULL);
	}
	return (NULL);
}
