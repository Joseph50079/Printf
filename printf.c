#include "main.h"

/**
 * _printf - printf function
 * @format: format
 * Return: return length
 */
int _printf(const char *format, ...)
{
	int length = 0, x;
	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}
	for (length = 0; format[length]; length++)
	{
		;
	}

	if (length <= 0)
	{
		return (0);
	}
	va_start(ap, format);

	x = checker(ap, format);

	va_end(ap);

	return (x);
}


/**
 * printInteger - prints an integer
 * @num: int
 * Return: returns length
 */
int printInteger(int num)
{
	char digit[50];
	int index = 0, length = 0;

	if (num < 0)
	{
		putchar('-');
		length = 1;
		num = -num;
	}

	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	while (num != 0)
	{
		digits[index] = '0' + num % 10;
		num = num / 10;
	}

	while (index--)
	{
		putchar(digits[index]);
		length++;
	}
	return (length);
}
