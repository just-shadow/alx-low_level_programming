#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a:array of integers
 * @n:number of elements of an array
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

