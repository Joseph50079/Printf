#include "main.h"

/**
 * format_specifiers - identify the format and return the value for format
 * @format: string format
 * @ap: argument variable
 * @i: index of format string where '%' is identified in the string 'format'
 * Return: return length of value -1 if fail 2 if '%%' 1 if no valid identifier
 */

int format_specifiers(const char *format, va_list ap, int *i)
{
	int x, length = 0;

	spec specific[] = {
	{'c', for_char},
	{'s', for_string},
	{'d', for_int_d},
	{'i', for_int_i},
	{'\0', NULL},
	};

	++*i;

	if (format[*i] == '%')
	{
		putchar('%');
		return (1);
	}
	if (format[*i] == '\0')
	{
		return (-1);
	}

	for (x = 0; x < 4; x++)
	{
		if (format[*i] == specific[x].symbol)
		{
			length = specific[x].func(ap);
			return (length);
		}
	}
	putchar('%');
	putchar(format[*i]);

	return (2);
}