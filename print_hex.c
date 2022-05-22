#include "main.h"
/**
  * print_hex - convert decimal number to hexadecimal
  * @ap: argument parameter
  * Return: pointer to string with hexadecimal
  */

char *print_hex(va_list ap)
{
	static char hex[] = "0123456789ABCDEF";
	static char *ptr;
	unsigned int n;
	int i = 0;

	n = va_arg(ap, unsigned int);

	
	ptr = (char *)malloc(sizeof(char) * (12));
	*ptr = '\0';

	while (n != 0)
	{
		*--ptr = hex[n % 16];
		n /= 16;
		i++;
	}

	return (ptr);

}
