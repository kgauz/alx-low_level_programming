#include "main.h"
#include <string.h>
/**
 * char *_strncpy - copies a string
 * @dest: copy from
 * @src: copy to
 * @n: size of src
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (0);
}
