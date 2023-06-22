#include "main.h"
/**
 * print_line - Entry point
 *
 *@n: check
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	for (int i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
