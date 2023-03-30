#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: pointer to the resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
