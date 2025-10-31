#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @c: char to change
 * Return: start
 */
char *cap_string(char *c)
{
	char *start = c;

	while (*c != '\0')
	{
		if (*c == 0)
		{
			if (*c < 123 && *c > 96)
			{
				*c = *c - 32;
			}
		}
		else if (*c == ',' || *c == ';' || *c == '.' || *c == '!' ||
		*c == '?' || *c == 34 || *c == '(' || *c == ')' ||
		*c == '{' || *c == '}' || *c == ' ' || *c == 9 || *c == 10)
		{
			c++;
			if (*c < 123 && *c > 96)
			{
				*c = *c - 32;
			}
			c--;
		}
		c++;
	}
	return (start);
}
