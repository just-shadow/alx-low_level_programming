#include <stdio.h>
/**
 * main - prints first 50 fibonnacci nummbers
 * Return: 0 success
 */
int main(void)
{
	int count;
	unsigned long x = 0, y = 1, fibb;

	for (count = 0; count < 50; count++)
	{
		fibb = x + y;
		printf("%lu", fibb);

		x = y;
		y = fibb;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
