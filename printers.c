#include "main.h"

/**
 * for_char - prints char
 * @ap: a va_list variable
 * Return: returns 1
 */
int for_char(va_list ap)
{
	int sym;

	sym = va_arg(ap, int);

	putchar(sym);

	return (1);
}

/**
 * for_string - prints a string
 * @ap: va_list
 * Return: length
 */
int for_string(va_list ap)
{
	char *str;
	int length;

	str = va_arg(ap, char *);
	if (str)
	{
		length = puts_string(str);
	}
	else
	{
		length = puts_string("(null)");
	}
	return (length);
}

/**
 * puts_string - prints a string
 * @str: string
 * Return: returns length
 */
int puts_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		putchar(str[i]);
	}

	return (i);
}

/**
 * for_int_d - for d
 * @ap: va_list
 * Return: return length
 */
int for_int_d(va_list ap)
{
	int d;
	char *x;

	d = va_arg(ap, int);

	x = converter(d, 10);

	d = puts_string((x != NULL) ? x : "127");

	return (d);
}
/**
 * for_int_i - for i
 * @ap: va_list
 * Return: returns length
 */
int for_int_i(va_list ap)
{
	int i;
	char *x;

	i = va_arg(ap, int);

	x = converter(i, 10);

	i = puts_string((x != NULL) ? x : "(null)");

	return (i);
}
