#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: print from this number
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
			{
				printf("%d", a);
				printf("\n");
				break;
			}
			else
			{
				printf("%d,", a);
			}
		}
	}
	else
	{
		for (b = n; n >= 98; b--)
		{
			if (b == 98)
			{
				printf("%d", b);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", b);
			}
		}
	}
}
