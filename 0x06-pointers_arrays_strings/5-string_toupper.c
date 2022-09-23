#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: lorem ipsum
 *
 * Return: lorem ipsum
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
