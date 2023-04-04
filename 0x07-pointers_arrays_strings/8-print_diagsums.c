#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: input
  * @size: input
  *
  * Return: 0
  */
void print_diagsums(int *a, int size)
{
	int c;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (c = 0; c < size; c++)
	{
		sum += a[(size * c) + c];
		sum1 += a[(size * (c + 1)) - (c + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
