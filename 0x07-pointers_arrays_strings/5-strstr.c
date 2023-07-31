#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be checked
 * @needle: substring to be located
 * Return: 0 seccess
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
