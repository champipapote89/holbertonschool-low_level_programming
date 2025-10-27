#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_diagonal - Entry point
*@n: line
*draw a diagonal line on the terminal.
*Return: always 0 (Succes)
*/
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');

			i++;
		}
	}
}
