#include "main.h"
#include <string.h>
/**
 * _strspn - get the length nof the prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f;

	f = strspn(s, accept);
	return (f);
}
