#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_sign - Entry point
*@n: character to check
*
*Return: 1 and print + if n is > 0, r
*
*/
int print_sign(int n)
{
if (n > '0')
{
return (1);
_putchar ('+');
}
else if (n == '0')
{
return (0);
_putchar ('0');
}
else
{
return (-1);
_putchar ('-');
}
return (0);
}
