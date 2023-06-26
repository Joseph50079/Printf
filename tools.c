#include "main.h"

/**
 * converter - a conveter
 * @x: ...
 * @n: ...
 */
char *converter(int x, int n)
{
	char *str = NULL;
	int z = 0, y, i;
	int negative = 0;

	if (x == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[z++] = '0';
		str[z] = '\0';
		return (str);
	}
	if (x < 0 && n == 10)
	{
		negative = 1;
		x = -x;
	}

	i = x;
	while (i != 0)
	{
		i /= n;
		z++;
	}

	str = malloc(sizeof(char) * (z + negative + 1));

	z = 0;
	while (x != 0)
	{
		y = x % n;
		str[z++] = (y > 9) ? (y - 10) + 'a' : (y + '0');
		x /= n;
	}
	if (negative == 1 && n == 10)
	{
		str[z++] = '-';
	}

	str[z] = '\0';

	reverse(str);

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
