#include "main.h"
/**
 * leet - encodes a string into 1337
 * @j:input value
 * Return:j value
 */
char *leet(char *j)
{
	int m;
	int n;
	char s1[] = "aAeEoOtTllL";
	char s2[] = "4433007711";

	for (m = 0; j[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (j[m] == s1[n])
			{
				j[m] = s2[n];
			}
		}
	}
	return (j);
}
