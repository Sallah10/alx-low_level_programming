#include <stdio.h>
#include "main.h"

/**
 * _puts - lorem ipsum
 * @str: lorem ipsum
 *
 * Return: 0
 */
void _puts(char *str)
{
	int index = 0;

	while (*(str + index) != '\0')
	{
		putchar(*(str + index));
		index++;
	}
	putchar(10);
}
