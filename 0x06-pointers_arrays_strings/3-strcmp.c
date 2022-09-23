#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: lorem ipsum
 * @s2: lorem ipsum
 *
 * Return: lorem ipsum
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
