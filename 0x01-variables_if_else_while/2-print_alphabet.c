#include <stdio.h>
00
/**
  * main - prints the alphabet in lowercase, followed by a new line.
  * Return: (0)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar("\n");
	return (0);
}
