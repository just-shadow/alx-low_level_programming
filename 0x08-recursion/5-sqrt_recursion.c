#include <stdio.h>
#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns natural squareroot
 * of a number
 * @n: integer to calaculate squareroot
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates squareroot
 * @n: integer to calaculate squareroot
 * @i: iterator
 * Return: resulting squareroot
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
