#include "main.h"
#include <string.h>
/**
 * char *_strcat - concatenates two strings
 * @dest: it concatenates with src
 * @src: it add values to dest
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int length_of_dest;
	int i = 0;

	length_of_dest = strlen(dest);
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		dest[length_of_dest + n] = src[n];
	}
	dest[length_of_dest + n] = '\0';
	return (dest);
}
