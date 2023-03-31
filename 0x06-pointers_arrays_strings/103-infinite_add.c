#include "main.h"
#include <string.h>
/**
 * char *infinite_add - add two numbers
 * @n1: number
 * @n2: second number
 * @r: buffer
 * @size_r: size of buffer
 * Return: string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int len = strlen(r);

	for ( i = 0; i < size_r; i++)
	{
		r[i] = n1[i] + n2[i];
	}
	if ( len  >= size_r)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}
