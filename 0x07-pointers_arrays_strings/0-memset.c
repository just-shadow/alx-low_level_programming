#include "main.h"
/**
 * _memset - entry point
 * @s: pointed area
 * @b: constant byte
 * @n: bytes
 * Return: Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; 0 < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
