#include "main.h"
#include <string.h>
/**
 * char *_strchr - locates a character in a string 
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *d;

	d = strchr(s, c);
	return (d);
}
