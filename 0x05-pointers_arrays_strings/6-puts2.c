#include "main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: the string
 */
void puts2(char *str)
{
	int m = 0;
	int n;

	while (str[m] != '\0')
	{
		m++;
	}
	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
