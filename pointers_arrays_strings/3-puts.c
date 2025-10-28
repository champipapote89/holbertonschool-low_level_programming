#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_puts - Entry point
*@str: parametre à print
*print a string, followed by a new line, to stdout
*Return: always 0 (Succes)
*/
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
