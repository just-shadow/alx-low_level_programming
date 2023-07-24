#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest:copy to
 * @src: source
 * Return:the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m++] = '\0';
	return (dest);
}
