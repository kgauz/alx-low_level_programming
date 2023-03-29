#include "main.h"
/**
 * char*_strcpy - copies the string pointed to by src
 * including the terminal null byte
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; n < i; n++)
	{
		dest[n] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
