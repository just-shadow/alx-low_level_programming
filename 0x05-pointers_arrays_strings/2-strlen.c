#include "main.h"
/**
 *_strlen-returns the length of a string
 *@s: string to get lenght of
 *Return: lenght of @s
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
