#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_square - Entry point
*@size: size of square
*print a square, followed by a new line.
*Return: always 0 (Succes)
*/

void print_square(int size)
{
	int i = 0, k = 0;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			while (i <= size)
			{
				for (k = 1; k <= size; k++)
				{
					_putchar('#');
				}
				_putchar('\n');
				i++;
			}
		}
	}
}
