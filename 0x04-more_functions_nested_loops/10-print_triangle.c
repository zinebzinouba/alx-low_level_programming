#include "main.h"
/**
 * print_triangle- Entry point
 *
 *@size: check
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < size; i++)
	{
		for (int j = 0; j <= size - i; j++)
			_putchar(' ');
		for (int k = 0; k <= i; k++)
			_putchar('#);
		_putchar("\n");
	}
	}
}
