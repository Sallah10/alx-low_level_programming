#included "main.h"

/**
 * leet - lorem ipsum
 * @str: lorem ipsum
 *
 * Return: lorem ipsum
 */
char *leet(char *str)
{
	int i;

	int j;
	
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";
	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (x[j] == *(str + i))
			{
				*(str + i) = y[j];
			}
		}
	}
	return (str);
}
