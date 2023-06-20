#include "main.h"
/**
* print_last_digit - Entry point
*
*@n: check
*
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
int r;
r = n % 10;
if (r >= 0)
{
	_putchar(r + '0');
	return (r);
}
else
{
	_putchar(-r + '0');
	return (-r);
}
}
