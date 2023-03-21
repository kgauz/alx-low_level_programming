#include <stdio.h>
/**
 * main - Entry point
 * Describtion: 'prints lowercase alphabet, except q and e
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			/* nothing */
		}
		else
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
