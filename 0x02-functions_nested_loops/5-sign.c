#include "main.h"
/**
 * print_sign- prints the sign of a number
 * @n: int to check
 * Return:1 prints + if n is positive
 * 0 prints 0 if n is zero
 * -1 prints - if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
