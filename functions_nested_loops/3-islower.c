#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_islower - Entry point
*@c: character to check
*
*Return: 1 if c is lowercase, 0 otherwise
*
*/
int _islower(int c)
{
if (c < 123 && c > 96)
{
return (1);
}
else
{
return (0);
}
return (0);
}
