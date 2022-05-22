#include <stdarg.h>
/**
* convert - coverts inputs to base 10
* @ptr: stores the data
* Return: ptr
*/

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	while (num != 0);

	return (ptr);
	}
}

/**
* _printf - a function that prints out the arguments passed through it
* 
*/
int _printf(const char *format, ...)
{
	int n_displayed = 0;
	int i = 0;

	va_list arg;
	va_start (arg, format);

	for (format; *format != '\0'; format++)
	{
		while (*format != '%')
		{
			putchar(*format);
			format++;
		}
		format++;

		switch (*format)
		{
			case 'c': i = va_arg(arg, int);
					putchar(i);
					break;
			case 'd': i = va_arg(arg, int);
					if (i<0)
					{
						i = -i;
						putchar('-');
					}
					puts(convert(i, 10));
					break;
			case 's': i = va_arg(arg, char *);
					puts(i);
					break;
			case 'i': i = va_arg(arg, int);
					puts(i);
					break;

		}
	}
	va_end(arg);

	return (n_displayed);
}
