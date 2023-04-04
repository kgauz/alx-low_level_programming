#include "main.h"
/**
 * char *_memset - fill the memory with a constant byte
 * @s: return pointer to the memory
 * @b: constant b
 * @n: size of the memory
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, j;
	int n1 = n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < n1; j++)
		{
			s[i] = b;
		}
	}
	return (s);
}
