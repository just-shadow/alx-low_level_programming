#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int y, sum = 0;
	char *z;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			z = argv[x];
			for (y = 0; y < strlen(z); y++)
			{
				if (z[y] < 48 || z[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(z);
			z++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
