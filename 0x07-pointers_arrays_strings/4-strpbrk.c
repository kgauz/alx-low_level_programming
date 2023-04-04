#include "main.h"
#include <string.h>
/**
 * char *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *w;

	w = strpbrk(s, accept);
	return (w);
}
