#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point of program printing last digit of random generated number
 * and if its greater than 5,less than 6 or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and its greater than 5\n", n, n % 1
				0);
	}
	if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is  less than 6 and not 0\n", n, n % 1
				0);
	}
	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
