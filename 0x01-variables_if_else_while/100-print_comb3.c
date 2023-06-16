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
	int j;
	int f;

	for (f = 48; f <= 57; f++)
	{
		for (j = f + 1; j <= 57; j++)
		{
			putchar(f);
			putchar(j);
			if (f != 56 || j != 57)
			{
				putchar(',');
			}
		}

	}
	putchar ('\n');
	return (0);
}
