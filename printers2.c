#include "main.h"

/**
 * for_int_binary - for printing binary
 * @ap: a va_list
 * Return: returns length
 */
int for_int_binary(va_list ap)
{
	int x;
	char *str;

	x = va_arg(ap, int);

	str = converter(x, 2);

	x = puts_string((str != NULL) ? str : "(null)");

	return (x);
}
