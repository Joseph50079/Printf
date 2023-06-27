#include "main.h"

/**
 * for_int_binary - for printing binary
 * @ap: a va_list
 * Return: returns length
 */
int for_int_binary(va_list ap)
{
	unsigned int x;
	int y = 0;
	char *str;

	x = va_arg(ap, int);

	str = converter(x, 2);

	y = puts_string((str != NULL) ? str : "(null)");

	return (y);
}


/**
 * for_octal - for octal
 * @ap: va_list
 * Return: length
 */
int for_octal(va_list ap)
{
	int x;
	unsigned int y;
	char *str;

	y = va_arg(ap, unsigned int);

	str = converter(y, 8);

	x = puts_string((str != NULL) ? str : "(null)");

	return (x);
}

/**
 * for_unsigned - for unsigned
 * @ap: a va_list
 * Return: length
 */
int for_unsigned(va_list ap)
{
	int x;
	unsigned int y;
	char *str;

	y = va_arg(ap, unsigned int);
	str = converter(y, 10);

	x = puts_string((str != NULL) ? str : "(null)");
	return (x);
}

/**
 * for_hex_lower - for hex lower
 * @ap: a va_list
 * Return: length
 */
int for_hex_lower(va_list ap)
{
	int x;
	unsigned int y;
	char *str;

	y = va_arg(ap, unsigned int);

	str = converter(y, 16);

	x = puts_string((str != NULL) ? str : "(null)");
	return (x);
}

/**
 * for_hex_upper - for hexdecimal upper case
 * @ap: argument list variable
 * Return: return length
 */

int for_hex_upper(va_list ap)
{
	int x;
	unsigned int y;
	char *str;

	y = va_arg(ap, unsigned int);

	str = converter(y, 16);

	str = check_lower(str);


	x = puts_string((str != NULL) ? str : "(null)");
	return (x);
}
