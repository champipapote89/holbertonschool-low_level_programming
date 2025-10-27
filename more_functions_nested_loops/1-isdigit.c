#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_isdigit - Entry point
*@c: character to check
*
*Return: 1 if c s a number, 0 otherwise
*
*/
int _isdigit(int c)
{
if (c < 58 && c > 47)
{
return (1);
}
else
{
return (0);
}
return (0);
}
