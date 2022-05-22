#include "main.h"
/**
  * print_oct - convert decimal number to octal
  * @ap: argument parameter
  * Return: pointer to string with octal
  */

char *print_oct(va_list ap)
{
	int d, t, c;
	unsigned int n;
	char *ptr;

	n = va_arg(ap, unsigned int);

	t = 0;
	ptr = (char *)malloc(sizeof(char) * (12));

	if (ptr == NULL)
		exit(EXIT_FAILURE);

	for (c = 10; c >= 0; c--)
	{
		d = n / pow_num(8, c);

		if (d & 7)
			*(ptr + t) = 7 + '0';
		else if (d & 6)
			*(ptr + t) = 6 + '0';
		else if (d & 5)
			*(ptr + t) = 5 + '0';
		else if (d & 4)
			*(ptr + t) = 4 + '0';
		else if (d & 3)
			*(ptr + t) = 3 + '0';
		else if (d & 2)
			*(ptr + t) = 2 + '0';
		else if (d & 1)
			*(ptr + t) = 1 + '0';
		else
			*(ptr + t) = 0 + '0';
		t++;
	}
	*(ptr + t) = '\0';

	return  (ptr);
}
