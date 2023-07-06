#include "main.h"
/**
 *is_palindrome- Entry point
 *
 *@s: check
 *
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += last_index(s +1) + 1;
	return (n);
}
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(0, end - 1, end % 2);
}
int check(char *s, int start, int end, int mod)
{
if ((start == end && mos != 0) || (start == end + 1 && mod ==0))
	return (1);
else if (s[start] != s[end])
	return (0);
else
	return (check(s, start +1, end -1, mod));
}
