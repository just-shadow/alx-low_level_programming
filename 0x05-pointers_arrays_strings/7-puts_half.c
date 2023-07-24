#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str:string to print
 */
void puts_half(char *str)
{
	int i;
	int n, x, y;
	int k = 0;

	for (i = 0; str[i] != '\0'; i++)
		k++;
	n = (k / 2);
	x = (k % 2);
	y = ((k + 1) / 2);
	if (x == 1)
		n = (y / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
