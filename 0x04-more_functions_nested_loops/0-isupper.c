#include "main.h"
/**
 * _isupper - Checks if char is uppercase
 * @c:The char to be checked
 * Return: 1 if cahr uppercase,0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
