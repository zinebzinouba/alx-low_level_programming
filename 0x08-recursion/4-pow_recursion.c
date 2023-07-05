#include "main.h"
/**
 *_pow_recursion- Entry point
 *
 *@x: check
 *@y: check
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * factorial(y - 1));
}
