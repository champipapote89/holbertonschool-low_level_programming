#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_to_98 - Entry point
*@n: parameter n
*Return:
*
*/
void print_to_98(int n)
{
while (n != 98)
{
if (n <= 98)
{
n++;
}
else if (n >= 98)
{
n--;
}
printf(" %d,", n);
}
return;
}
