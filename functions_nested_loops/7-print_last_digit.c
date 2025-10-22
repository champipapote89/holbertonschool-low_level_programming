#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_last_digit - Entry point
*@i: character to check
*
*Return: unsigned int i
*
*/
int print_last_digit(int i)
{
int o = 0;
o = i % 10;
return (o);
}
