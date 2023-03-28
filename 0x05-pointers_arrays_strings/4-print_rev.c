#include "main.h"
/**
 * print_rev - prints a tring in reverse
 * followed by a new line
 * @s: receive string value from main
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; i < '\0'; i--)
	{
		printf("%s", s[i]);
	}
	printf("\n");
}
