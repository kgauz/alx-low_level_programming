#include "main.h"

int check(char *s, int m, int length);
int strlen_recursion(char *s);

/**
 * is_palindrome - return one if string is a palindrome
 * @s: string
 * Return: string
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - return length
 * @s: string
 * Return: length
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_recursion(s + 1));
}

/**
 * check - check palindrome
 * @s: string
 * @m: iterator
 * @length: length
 * Return: length
 */
int check(char *s, int m, int length)
{
	if (*(s + m) != *(s + length - 1))
	{
		return (0);
	}
	if (m >= length)
	{
		return (1);
	}
	return (check(s, m + 1, length - 1));
}
