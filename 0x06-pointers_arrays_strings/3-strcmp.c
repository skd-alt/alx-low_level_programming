#include "main.h"

/**
 * _strcmp - Function which compares two strings.
 * @s1: first string
 * @s2: second string
 * Return:
 * returns zero if s1 == s2
 * returns negative number if s1 < s2
 * returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (i >= 0)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			diff = 15;
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = -15;
			break;
		}
		else if (s1[i] != s2[i])
			diff = 15
		else
			i++;

	}
	return (diff);
}
