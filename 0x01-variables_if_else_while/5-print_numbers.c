#include <stdio.h>

/**
  * main - Prints all numbers less than 10, starting from 0
  *
  * Return: returns 0
  */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
