#include "main.h"
/**
 * _strlen - Entry point
 *
 *@s: pointer
 *
 * Return: Always compt (Success)
 */
int _strlen(char *s)
{
	int compt;

	for (compt = 0; *s != '\0'; s++)
		compt++;
	return (compt);
}
