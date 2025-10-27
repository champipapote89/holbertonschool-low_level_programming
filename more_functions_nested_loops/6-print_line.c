#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_line - Entry point
*@n: line
*draw a straight line in the terminal.
*Return: always 0 (Succes)
*/
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
}
