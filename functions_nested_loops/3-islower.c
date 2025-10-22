#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_islower - Entry point
*@c: character to check
*
* Return: 1 if c is lowercase, 0 otherwise
*Return: always 0 (Succes)
*/
int _islower(int c)
{
if (c < 91 && c > 64)
{
return (1);
}
return (0);
}
