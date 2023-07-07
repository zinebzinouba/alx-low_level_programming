#include "main.h"
/**
 *_strcpy - Entry point
 *
 * @dest: Always 0 (Success)
 *@src: check
 *
 *Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
