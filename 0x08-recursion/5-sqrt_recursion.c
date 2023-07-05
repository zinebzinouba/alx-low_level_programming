#include "main.h"
/**
 * _sqrt_recursion- Entry point
 *
 *@n: check
 *@val: check
 *
 * Return: Always 0 (Success)
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square- Entry point
 *
 *@n: check
 *@val: check
 *
 * Return: Always 0 (Success)
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
