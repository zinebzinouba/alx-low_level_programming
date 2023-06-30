#include "main.h"
/**
 * string_toupper- Entry point
 *
 *@str: check
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
