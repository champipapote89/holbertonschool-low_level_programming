#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_triangle - Entry point
*@size: size
*print a triangle, followed by a new line.
*Return: always 0 (Succes)
*/

void print_triangle(int size)
{
	int i = 0, j = 0, k = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size - i - 1)
			{
				_putchar(' ');
				j++;
			}
			k = 0;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
