#include "main.h"
/**
 * malloc_checked- Entry point
 *
 *@b: check
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
