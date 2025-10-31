#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @c: char to change
 * Return: c
 */
char *string_toupper(char *c)
{
	char *start = c;

	while (*c != '\0')
	{
		if (*c < 91 && *c > 64)
		{
			*c = *c;
		}
		else if (*c < 123 && *c > 96)
		{
			*c = *c - 32;
		}
		c++;
	}
	return (start);
}
