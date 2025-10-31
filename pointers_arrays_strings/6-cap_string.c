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
		if (*c == ',' || *c == ';' || *c == '.' || *c == '!' ||
		*c == '?' || *c == '\"' || *c == '(' || *c == ')' ||
		*c == '{' || *c == '}' || *c == ' ' || *c == '\t' || *c == '\n')
		{
			c++;
			if (*c < 123 && *c > 96)
			{
				*c = *c - 32;
			}
		}
		c++;
	}
	return (start);
}
