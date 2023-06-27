#include "main.h"

/**
 * converter - a conveter
 * @x: ...
 * @n: ...
 */
char *converter(int x, int n)
{
	static char *ptr = "0123456789abcdef";
	static char arr[50];
	char *str;
	char sym = 0;
	unsigned int car = x;

	if (x < 0)
	{
		car = -x;
		sym = '-';
	}

	str = &arr[49];
	*str = '\0';

	while (car != 0)
	{
		*--str = ptr[car % n];
		car /= n;
	}

	if (sym == '-')
	{
		*--str = sym;
	}

	return (str);
}


/**
 * reverse - reverse string
 * @s: string
 */
void reverse(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
		fcounter++;

	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
	s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
