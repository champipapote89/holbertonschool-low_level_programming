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
void jack_bauer(void)
{
char oh = 48;
char ho = 48;
char om = 48;
char mo = 48;
for (ho = 48; ho <= 50; ho++)
{
for (oh = 48; oh <= 57; oh++)
{
for (mo = 48; mo <= 53; mo++)
{
for (om = 48; om <= 57; om++)
{
_putchar(ho);
_putchar(oh);
_putchar(':');
_putchar(mo);
_putchar(om);
_putchar('\n');
}
}
if (ho == 50 && oh == 51)
{
break;
}
}
}
}
