#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
