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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int prod;

		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
}
