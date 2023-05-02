#include "main.h"
#include <stdlib.h>

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
 * _strdup - a function which create array
 * @str: character
 * Return: memory address of array
 */
char *_strdup(char *str)
{
	int i = _strlen(str), j;
	char *str_copy = malloc(i * sizeof(char) + 1);

	if (str == NULL || str_copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		str_copy[j] = str[j];
	}
	str_copy[i + 1] = '\0';
	return (str_copy);
}
