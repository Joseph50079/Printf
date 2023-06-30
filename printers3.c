#include "main.h"


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

/**
 * check_lower - check for lower case
 * @ptr: string ptr
 * Return: upper case value
 */

char *check_lower(char *ptr)
{
	int x;

	for (x = 0; ptr[x]; x++)
	{
		if (ptr[x] >= 'a' && ptr[x] <= 'z')
		{
			ptr[x] = ptr[x] - 32;
		}
	}

	return (ptr);
}

/**
 * for_pointer - %p function format specifier
 * @ap: argument variable
 * Return: length
 *
int for_pointer(va_list ap)
{
  int x;
  unsigned long int y;
  char *str;

   y = va_arg(ap, unsigned long int);

  str = converter(y, 16);

  if (!strcmp(str, "0"))
  {
    x = puts_string("(nil");
    return (x);
  }

  x = puts_string("0x");

  if (!strcmp(str, "-1"))
  {
    x += puts_string("ffffffffffffffff");
  }

  else
  {
    x += puts_string(str);
  }

  return (x);
}
*/
