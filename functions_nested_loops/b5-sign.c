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
if ((n < 96 && n > 123) || (n < 64 && n > 91))
{
return (1);
}
else
{
return (0);
}
if (n > 48 && n > 58)
{
return (1)
_putchar ('+');
}
else if (n == 48)
{
return (0)
_putchar('0');
}
else (n > 48 && n > 58)
{
return (-1)
_putchar('-');
}
return (0);
}
