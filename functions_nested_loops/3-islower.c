#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_islower - Entry point
*check for lowercase character
*Return: always 0 (Succes)
*/
int _islower(int c)
{
if (c<91 && c>64);
{
_putchar(c);
return (1);
}
return (0);
}
