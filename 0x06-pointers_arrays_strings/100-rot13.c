#include "main.h"
/**
 * char *rot13n - encodes a string using rot13
 * @m: strings values
 * Return: string
 */
char *rot13(char *m)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for ( i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0' && s[j] != '\0' ; j++)
		{
			if ( m[i] ==  s[j] )
			{
				m[i] = a[j];
				break;
			}
		}
	}
	return (m);
}
