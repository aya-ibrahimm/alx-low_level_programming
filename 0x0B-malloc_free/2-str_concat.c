#include "main.h"

/**
 * _strlen - a functiion which count length of string
 * @str: character
 * Return: the length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - the function concate string
 * @s1:string number 1
 * @s2: tring number 2
 * Return: will return s1 concate wih s2
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i, j;
	char *str_concated;

	if (s1 != NULL)
	{
		l1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		l2 = _strlen(s2);
	}
	str_concated = malloc(l1 + l2 + 1);
	if (str_concated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		str_concated[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		str_concated[i + j] = s2[j];
	}
	str_concated[i + j] = '\0';
	return (str_concated);
}
