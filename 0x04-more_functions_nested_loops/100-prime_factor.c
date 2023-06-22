#include "main.h"
#include <stdio.h>
/**
 * square- Entry point
 *
 *@x: check
 *
 * Return: Always 0 (Success)
 */
double square(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * largest- Entry point
 *
 *@num: check
 *
 * Return: Always 0 (Success)
 */
void largest(long int num)
{
	int prim, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prim = 3; prim <= square(num); prim += 2)
	{
		while (num % prim == 0)
		{
			num = num / prim;
			largest = prim;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	largest(612852475143);
	return (0);
}
