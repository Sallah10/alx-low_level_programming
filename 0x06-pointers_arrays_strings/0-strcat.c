#include "main.h"

/**
 * _strcat - lorem ipsum
 * @dest: lorem ipsum
 * @src: lorem ipsum
 *
 * Return: lorem ipsum
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int d_len;

	i = 0;
	d_len = 0;
	while (dest[i++])
	{
		d_len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[d_len++] = src[i];
	}
	return (dest);
}
