#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*more_numbers - Entry point
*prints the numbers from 0 to 14 10 times in lowercase
*Return: always 0 (Succes)
*/
void more_numbers(void)
{
int i = 0;

for (i = 0 ; i < 10 ; i++)
{
	char i = '0';

	for (i = 0 ; i < 15 ; i++)
	{
		{
			if (i > 9)
			_putchar(48 + i / 10);
		}
		_putchar(48 + i % 10);
	}
	_putchar('\n');
}
return;
}
