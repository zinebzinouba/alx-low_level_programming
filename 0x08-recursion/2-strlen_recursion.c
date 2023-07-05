#include "main.h"
/**
 * _strlen_recursion- Entry point
 *
 *@s: check
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != 0)
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
