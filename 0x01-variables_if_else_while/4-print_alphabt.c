#include <stdio.h>

/**
 * main - Prints all twenty-four alphabets excluding q and e
 *
 * Return: 0
 */
int main(void)
{
	char letters = 97;

	while (letters <= 122)
	{
		if (letters == 113 || letters == 101)
		{
		letters++;
		continue;
		}
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
