#include "main.h"

/**
 * _isalpha - checks if a character is in alphabet
 *
 * Return: 1 if letter is lowercase, 0 if not
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
