#include "main.h"

/**
  * _putchar - write to stdout
  * @c: character to output
  * Return: 1 if success, -1 if not
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  * _strlen - print length of string
  * @str: string passed
  * Return: length as int
  */

int _strlen(char *str)
{
	int y = 0;

	while (str[y] != '\0')
		y++;
	return (y);
}

/**
  * _strcpy - copy from one file to another
  * @dest: destination
  * @src: source
  * Return: pointer to destination
  */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
  * pow_num - raise x to power y
  * @x: base number
  * @y: power
  * Return: result
  */

int pow_num(int x, int y)
{
	int power = 1, i;

	for (i = 1; i <= y; ++i)
	{
		power = power * x;
	}

	return power;
}

























