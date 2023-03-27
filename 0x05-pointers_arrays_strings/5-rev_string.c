#include "main.h"

/**
 * rev_string - reverse the string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, intm;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		intm = s[k];
		s[k] = s[j];
		s[j] = intm;
		k++;
		j--;
	}
}
