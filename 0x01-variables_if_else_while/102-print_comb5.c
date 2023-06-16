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
	int i = 0;
	int j;

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
					{
						putchar((i / 10) + 48);
						putchar((i % 10) + 48);
						putchar(' ');
						putchar((j / 10) + 48);
						putchar((j % 10) + 48);
						if (i != 98 || j != 99)
						{
							putchar(',');
							putchar(' ');

						}

					}
			j++;
		}
		i++;
	}
	putchar('\n');


	return (0);
}
