#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point of program printing last digit of random generated number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	k = n % 10;
	if (k > 5)
	{
		printf("Last digit of %d is %d and its greater than 5\n",
			n, k);
	}
	if (k < 6 && k != 0)
	{
		printf("Last digit of %d is %d and is  less than 6 and not 0\n",
			n, k);
	}
	if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, k);
	}
	return (0);
}
