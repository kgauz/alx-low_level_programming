#include "main.h"
/**
 * char *_memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: size
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int n1 = n;

	for (i = 0; i < n1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
