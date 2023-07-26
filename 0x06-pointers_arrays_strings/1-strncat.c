#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest:input value
 * @src:input
 * @n:input
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int j = 0;

	while (dest[m] != '\0')
	{
		m++;
		j++;
	}
	for (m = 0; src[m] && m < n; m++)
		dest[j++] = src[m];
	return (dest);
}
