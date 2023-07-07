#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *@argc: check
 *@argv: check
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
