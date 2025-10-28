#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_rev - Entry point
*@s: parametre à print
*print a string, in reverse, followed by a new line.
*Return: always 0 (Succes)
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

void print_rev(char *s)
{
	int c = _strlen(s) - 1;

	while (s[c] >= 0 )
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
