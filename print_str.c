#include "main.h"

/**
  * print_str - print string as string
  * @arg: string to print
  * Return: string
  */

char *print_str(va_list arg)
{
	char *ptr, *str, *copy_string;
	int str_len;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";

	str_len = _strlen(str);

	ptr = malloc(sizeof(char) * str_len + 1);
	copy_string = _strcpy(ptr, str);

	if (ptr == NULL)
		return (NULL);
	return (copy_string);
}

