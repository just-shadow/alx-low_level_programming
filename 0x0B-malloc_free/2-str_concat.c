#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *s;
	int k = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
