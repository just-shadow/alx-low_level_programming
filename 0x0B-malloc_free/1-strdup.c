#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str:string to duplicate
 * Return: string duplicated
 */
char *_strdup(char *str)
{
	char *n;
	int i = 0, j = 1;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
		j++;
	}
	n = malloc((sizeof(char) * j) + 1);

	if (n == NULL)
		return (NULL);
	while (i < j)
	{
		n[i] = str[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
