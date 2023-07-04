#include "main.h"
/**
 * _strchr- Entry point
 *
 *@s: check
 *@c: check
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i, flag, j;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
			flag = i;
	}
	for (i = flag, j = 0; s[i] != '\0'; i++, j++)
	{
		r[j] = s[i];
	}
	return (j);
}
