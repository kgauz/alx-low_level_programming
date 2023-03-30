#include "main.h"
/**
 * char *_strncat - concatenates two strings
 * @dest: receive value from src
 * @srs: add value to dest
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[length + i] = src[i];
	}
	return (dest);
}
