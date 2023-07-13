#include "main.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1long, s2long;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1long = 0; s1[s1long] != '\0'; s1long++)
		;
	for (s2long = 0; s1[s2long] != '\0'; s2long++)
		;
	str = malloc(s1long + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
