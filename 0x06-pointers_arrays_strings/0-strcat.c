#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest: lorem ipsum
 * @src: lorem ipsum
 *
 * Return: lorem ipsum
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int dLen;

	i = 0;
	dLen = 0;
	while (dest[i++])
	{
		dLen++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dLen++] = src[i];
	}
	return (dest);
}