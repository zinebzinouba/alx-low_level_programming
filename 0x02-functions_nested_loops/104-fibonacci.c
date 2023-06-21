#include "main.h"
#include <stdio.h>
/**
 * numLenght - Entry point
 *
 *@num: check
 *
 * Return: Always 0 (Success)
 */
int numLenght(int num)
{
	int lenght = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		lenght += 1;
	}
	return (lenght);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, initial;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
	if (f1a > 0)
		printf("%lu", f1o);
	initial = numLenght(mx) - 1 - numLenght(f1);

	while (f1o > 0 && initial > 0)
	{
		printf("%d", 0);
		initial--;
	}
	printf("%lu", f1);

	sum = (f1 + f2) % mx;
	sumo = f1o + f2o + (f1 + f2) / mx;
	f1 = f2;
	f1o = f2o;
	f2 = sum;
	f2o = sumo;

	if (count != 98)
		printf(", ");
	else
		prontf("\n");
	}
	return (0);
}
