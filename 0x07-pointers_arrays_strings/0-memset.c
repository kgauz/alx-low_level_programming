#include "main.h"
#include <string.h>
/**
 * char *_memset - fill the memory with a constant byte
 * @s: return pointer to the memory
 * @b: constant b
 * @n: size of the memory
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int n1 = n;

	for (i = 0; i < n1; i++)
	{
		s[i] = b;
	}
	return (s);
}
