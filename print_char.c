#include "main.h"

/**
  * print_char - print char as string
  * @ap: char to print
  * Return: string
  */

char *print_char(va_list ap)
{
	char *ptr;
	char c;

	c = va_arg(ap, int);
	if (c == 0)
		c = '\0';
	ptr = malloc(sizeof(char) * 2);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = c;
	ptr[1] = '\0';

	return (ptr);
}
