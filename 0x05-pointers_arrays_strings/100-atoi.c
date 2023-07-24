#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;
	int m = 1;
	unsigned int n = 0;
	int len = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			len = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}
		if (len == 1)
		{
			break;
		}
		c++;
	}
	n *= m;
	return (n);
}
