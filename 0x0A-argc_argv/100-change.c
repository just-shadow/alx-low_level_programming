#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make
 * change to an amount of money
 * @argc: number of arguments pased to program
 * @argv:array of pointers to arguments
 * Return: 0 if number of arguments is negative
 * if not exactly 1 return -1
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
