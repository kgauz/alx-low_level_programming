#include "main.h"
/**
 * char *cap_string - capitalizes all words of a string
 * @src: lowercase string
 * Return: string
 */
char *cap_string(char *src)
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
