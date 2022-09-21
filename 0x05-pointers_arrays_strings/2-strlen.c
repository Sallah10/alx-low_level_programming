#include <string.h>
#include "main.h"

/**
 * _strlen - lorem ipsum
 * @s: string input
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
