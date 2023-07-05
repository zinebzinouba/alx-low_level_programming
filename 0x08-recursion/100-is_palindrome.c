#include "main.h"
/**
 *is_palindrome- Entry point
 *
 *@s: check
 *
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	int NbCaract  = _strlen_recursion(&s);

	if (NbCaract <= 1)
		return (1);
	if (s[0] == s[NbCaract - 1])
	{
		return (is_palindrome(s + 1));
				NbCaract -= 2;
	}
	return (0);
}
