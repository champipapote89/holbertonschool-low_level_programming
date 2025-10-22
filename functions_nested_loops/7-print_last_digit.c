#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_last_digit - Entry point
*@i: character to check
*
*Return: last digit
*
*/
int print_last_digit(int i)
{
i = (long int)i;
if (i < 0)
i = (i * (-1));
i = i % 10;
_putchar (i + '0');
return (i);
}
