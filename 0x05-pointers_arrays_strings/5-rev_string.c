#include "main.h"

/**
 * rev_string - lorem ipsum
 * @s: string to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int length = 0;

	char tmp;

	int index = 0;

	while (s[index++])
	{
		length++;
	}
	for (index = length - 1; index >= length / 2; index--)
	{
		tmp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = tmp;
	}
}
