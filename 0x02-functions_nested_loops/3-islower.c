#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @ch: character to be checked
 * 
 * Return: 1 if letter is lowercase, 0 if not
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
