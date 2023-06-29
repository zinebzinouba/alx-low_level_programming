#include "main.h"
/**
 * _strncat- Entry point
 *
 *@dest: check
 *@src: check
 *@n:check
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int compt = 0;
	int i;

	while (dest[compt])
		compt++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[compt] = src[i];
		compt++;
	}
	return (dest);

}
