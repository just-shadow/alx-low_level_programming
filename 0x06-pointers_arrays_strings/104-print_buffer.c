#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints buffer
 * @b:buffer
 * @size:size
 */
void print_buffer(char *b, int size)
{
	int o, m, n;

	o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		m = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + o + n));
			else
				printf(" ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		for (n = 0; n < m; n++)
		{
			int c = *(b + o + n);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
