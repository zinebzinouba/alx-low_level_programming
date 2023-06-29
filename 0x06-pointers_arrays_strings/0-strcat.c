#include "main.h"
/**
 * _strcat- Entry point
 *
 *@dest: check
 *@src: check
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int compt = 0;
	int i;

	while (dest[compt])
		compt++;
	for (i = 0; src[i]; i++)
	{
		dest[compt] = src[i];
		compt++;
	}
	return (dest);

}
