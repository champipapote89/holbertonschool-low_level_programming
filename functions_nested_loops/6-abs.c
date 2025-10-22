#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_abs - Entry point
*@i: character to check
*
*Return: unsigned int i
*
*/
int _abs(int i)
{
if (i < 0)
i = (i * (-1));
return ((unsigned int) i);
}
