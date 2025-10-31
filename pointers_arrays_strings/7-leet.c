#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * leet - encode a string into 1337
 * @c: char to change
 * Return: start
 */
char *leet(char *c)
{
	char *start = c;
	int i = 0;
	char let[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*c != '\0')
	{
		i = 0;
		while (i <= 9)
		{
			if (let[i] == *c)
			{
				*c = num[i];
			}
			i++;
		}
		c++;
	}
	return (start);
}
