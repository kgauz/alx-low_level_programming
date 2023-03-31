#include "main.h"
#include <ctype.h>
/**
 * char *string_toupper - changes all letters of a string to uppercase
 * @src: contain string
 * Return: string
 */
char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	return (src);
}
