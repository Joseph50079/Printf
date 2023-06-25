#include "main.h"

/**
 * checker - checks for valud format specifiers
 * @ap: argument variable
 * @format: string format
 * Retuen: number of int counted for format
 */


int checker(va_list ap, const char *format)
{
	int x, y = 0;
	int z;

	for (x = 0; format[x] != '\0'; x++)
	{
	if (format[x] == '%')
	{
		z = format_specifiers(format, ap, &x);
		if (z == -1)
		{
		return (-1);
		}
		y = y + z;
		continue;
	}
	putchar(format[x]);
	y += 1;
	}

	return (y);
}
