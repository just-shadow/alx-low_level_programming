#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @s: The int to extract the last digit from
 * Return:value of last digit
 */

int print_last_digit(int s)
{
	int n;

	n = s % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
