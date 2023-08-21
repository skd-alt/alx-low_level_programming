#include "main.h"
/**
 * _strstr - Locates substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *lt = haystack;
		char *lt2 = needle;

		while (*lt == *lt2 && *lt2 != '\0')
		{
			lt++;
			lt2++;
		}
		if (*lt2 == '\0')
			return (haystack);
	}
	return (0);
}
