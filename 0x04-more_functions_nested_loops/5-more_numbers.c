#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int j;
	int i;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar((j / 10 + '0'));
			_putchar((j % 10 + '0'));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
