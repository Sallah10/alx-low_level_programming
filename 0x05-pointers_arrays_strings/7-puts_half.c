#include "main.h"
#include <stdio.h>

/**
 * puts_half - lorem ipsum
 * @str: string to be printed
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;

	int l = 0;

	int n;

	while (str[i++])
	{
		l++;
	}
	if ((l % 2) == 0)
	{
		n = l / 2;
	} else
	{
		n = (l + 1) / 2;
	}
	for (i = n; i < l; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
