#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*jack_bauer - Entry point
*
*
*Return
*
*/
void main(void)
{
int h = 0;
int m = 0;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
if (m <= 9 && h <= 9)
{
printf("0%d:0%d\n", h, m);
}
else if (m <= 9 && h >= 10)
{
printf("%d:0%d\n", h, m);
}
else if (m >= 10 && h <= 9)
{
printf("0%d:%d\n", h, m);
}
else
printf("%d:%d\n", h, m);
}
}
}
