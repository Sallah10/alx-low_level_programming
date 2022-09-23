#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: lorem ipsum
 * @src: lorem ipsum
 * @n: lorem ipsum
 *
 * Return: lorem ipsum
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	
	int d_len;
	
	i = 0;
	d_len = 0;
	while (dest[i++])
	{
		d_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[d_len++] = src[i];
	}
	return (dest);
}
