#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplie two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int m1 = 0;
	int m2 = 0;

	if (argc == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		printf("%d\n", m1 * m2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
