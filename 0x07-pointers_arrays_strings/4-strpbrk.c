#include "main.h"
/**
 * _strpbrk- Entry point
 *
 *@s: check
 *@accept: check
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
				break;
			}
		}
	}
	return ('\0');
}
