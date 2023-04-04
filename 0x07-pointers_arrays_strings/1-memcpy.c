#include "main.h"
/**
 * char 8_memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: size
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;
	int n1 = n;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j < n1; j++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
