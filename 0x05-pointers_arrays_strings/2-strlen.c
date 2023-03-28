#include "main.h"
#include <string.h>
/**
 * _strlen - calculate the length of a string
 * @s: receive the character value from the main
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
