#include "main.h"
#include <stdio.h>

/**
 * check_prime - chcks if number is prime
 * @n: number to be checked
 * @i: iteration times
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i);

/**
 * is_prime_number - return 1 if number is prime
 * @n: the number to be checked
 * Return: success
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - chcks if number is prime
 * @n: number to be checked
 * @i: iteration times
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
