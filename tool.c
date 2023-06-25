#include "main.h"

/**
 * converter - converts int to string and count
 * @x: integer x
 * @n: integer n
 * Return: return string
 */

char *converter(int x, int n)
{
	char *str = 0;
	int z = 0, y;
	int negative = 0;

	if (x == 0)
	{
		str[z++] = 0;
		str[z] = '\0';
		return (str);
	}

	if (x < 0 && n == 10)
	{
		negative = 1;
		x = -x;
	}

	while (x != 0)
	{
		y = x % n;
		str[z++] = y > 9 ? (y - 10) + 'a' : y + '0';
		x /= n;
	}

	if (negative == -1 && n == 10)
	{
		str[z++] = '-';
	}

	str[z] = '\0';

	reverse(str);

	return (str);
}




/**
 * reverse - reverses string
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
