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
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find natural aqroot
 * @n: integer to calaculate squareroot
 * @i: iterator
 * Return: resulting squareroot
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
