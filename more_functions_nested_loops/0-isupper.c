#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_isupper - Entry point
*@c: character to check
*
*Return: 1 if c in upper, 0 otherwise
*
*/
int _isupper(int c)
{
if (c < 91 && c > 64)
{
return (1);
}
else
{
return (0);
}
return (0);
}
