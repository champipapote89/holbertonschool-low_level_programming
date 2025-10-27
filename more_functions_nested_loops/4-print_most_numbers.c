#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - Entry point
*prints numbers from 0 to 9 exept 2 and 4
*Return: always 0 (Succes)
*/
void print_most_numbers(void)
{
int i = '0';
while (i <= '9')
{
	if (i != '2' && i != '4')
	{
		_putchar(i);
	}
	i++;
}
_putchar('\n');
return;
}
