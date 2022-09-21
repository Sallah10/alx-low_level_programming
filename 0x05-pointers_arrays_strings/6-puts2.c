#include <stdio.h>
#include "main.h"

/**
 * puts2 - lorem ipsum
 * @str: lorem ipsum
 *
 * Return: 0
 */
void puts2(char *str)
{
	int index = 0;

	int length = 0;

	while (str[index++])
	{
		length++;
	}
	for (index = 0; index < length; index += 2)
	{
		putchar(str[index]);
	}
	putchar(10);
}
