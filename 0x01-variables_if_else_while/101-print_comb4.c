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
	int k;

	for (f = 48; f <= 57; f++)
	{
		for (j = f + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
			putchar(f);
			putchar(j);
			putchar(k);
			if (f != 55 || j != 56 || k != 57)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}

	}
	putchar ('\n');
	return (0);
}
