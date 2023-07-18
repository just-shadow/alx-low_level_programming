#include <stdio.h>
/**
 * main - prints first 50 fibonnacci nummbers
 * Return: 0 success
 */
int main(void)
{
	int factor;

	unsigned long x = 0, y = 1, z;

	for (factor = 0; factor < 50; factor++)
	{
		z = x + y;
		printf("%lu"' z);

		x = y;
		y = z;

		if (factor == 49)
			printf("\n");
		else
			printf(",");
	}
}
