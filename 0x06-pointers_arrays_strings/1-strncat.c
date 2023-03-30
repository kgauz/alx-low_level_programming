#include "main.h"
#include <string.h>
/**
 * char *_strncat - concatenates two strings
 * @dest: receive value from src
 * @src: add value to dest
 * @n: contain the size of src
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
