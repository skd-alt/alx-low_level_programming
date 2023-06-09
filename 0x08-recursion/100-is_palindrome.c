#include "main.h"
/**
 * _length - checks the length of a string
 * @s: is the string
 * Return: return the length of the string
**/
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 * _length(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @ln: is the length of the string
 * @s: is the string
 * Return: 1 if is the palindrome or 0 if not
**/
int checkp(int i, int ln, char *s)
{
	if (ln > 0)
	{
		if (s[i] == s[ln])
		{
			return (checkp(i + 1, ln - 1, s));
		}
		else if (s[i] != s[ln])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
