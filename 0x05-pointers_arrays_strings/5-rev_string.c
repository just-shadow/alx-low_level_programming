#include "main.h"
/**
 * rev_string - reverses a string
 * @s:string to reverse
 */
void rev_string(char *s)
{
	int len;
	char rev = s[0];
	int index = 0;

	while (s[index] != '\0')
		index++;
	for (len = 0; len < index; len++)
	{
		index--;
		rev = s[len];
		s[len] = s[index];
		s[index] = rev;
	}
}
