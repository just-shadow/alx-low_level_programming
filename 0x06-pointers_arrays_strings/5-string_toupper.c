#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @m:string to change
 * Return:m
 */
char *string_toupper(char *m)
{
	int i = 0;

	while (m[i])
	{
		if (m[i] >= 'a' && m[i] <= 'z')
			m[i] = m[i] - 32;
		i++;
	}
	return (m);
}
