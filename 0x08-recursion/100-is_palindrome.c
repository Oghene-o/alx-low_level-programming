#include "main.h"

/**
 * check_pal - checks if a string is a palindrome recursively
 * @s: string to check
 * @i: current index
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}
