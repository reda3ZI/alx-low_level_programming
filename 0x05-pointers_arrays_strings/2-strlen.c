#include "main.h"

/**
  *  _strlen - function that returns the length of a string
  * @s: string
  * Return: the length
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
