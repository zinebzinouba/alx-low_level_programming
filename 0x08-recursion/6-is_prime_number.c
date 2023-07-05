#include "main.h"
#include "stdio.h"
/**
 *is_prime_number- Entry point
 *
 *@n: check
 *@o: check
 *
 * Return: Always 0 (Success)
 */
int premier(int n, int o);
int is_prime_number(int n)
{
	return (premier(n, 2));
}
/**
 * premier- Entry point
 *
 *@n: check
 *@o: check
 *
 * Return: Always 0 (Success)
 */
int premier(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (premier(o, n + 1));
}
