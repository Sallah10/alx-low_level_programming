#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - lorem ipsum
 * @s: string to reverse
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		putchar(*(s + length));
	}
	putchar(10);
}
