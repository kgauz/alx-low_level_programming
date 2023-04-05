#include "main.h"
#include <string.h>
/***
 * char *_strstr - locates a substring
 * @haystack: string
 * @needle: byte
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *e;

	e = strstr(haystack, needle);
	return (e);
}
