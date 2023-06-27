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
