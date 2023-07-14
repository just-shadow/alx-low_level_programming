#include <stdio.h>
/**
 * main - Entry point for a program
 * Return: 0 -Program is succesfull implemented
 */
int main(void)
{
	int n, m;

	for (n = 12; n <= 14; n++)
	{
		for (m = 13; m <= 15; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 14 || m != 15)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

