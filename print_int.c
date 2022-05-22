#include "main.h"

/**
 * convert_int_to_str - makes an int a string
 * @multiple: multiple of 10
 * @length: length of number
 * @n: number to convert to string
 * Return: string
 **/
char *convert_int_to_str(int multiple, int length, int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * length + 2);
	if (str == NULL)
		return (NULL);

	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	while (n < 0)
	{
		str[i] = ((n / multiple) * -1 + '0');
		n = n % multiple;
		multiple /= 10;
		i++;
	}
	while (multiple >= 1)
	{
		str[i] = ((n / multiple) + '0');
		n = n % multiple;
		multiple /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * print_int - get integer length
 * @ap: argument parameter
 * Return: string
 **/
char *print_int(va_list ap)
{
	int length, multiple, n, temp;

	n = va_arg(ap, int);
	temp = n;
	length = 0;
	multiple = 1;

	if (n == 0)
	{
		length++;
		return (convert_int_to_str(multiple, length, n));
	}

	while (temp != 0)
	{
		length += 1;
		if (length > 1)
			multiple *= 10;
		temp /= 10;
	}

	return (convert_int_to_str(multiple, length, n));
}
