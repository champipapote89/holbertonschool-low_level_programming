#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
char i;
int j;
char k;
for (j = 0; j < 10; j++)
{
putchar('0');
}
putchar('\n');
for (i = 0; i < 10; i++)
{
for (k = '0'; k <= '9'; k++)
{
putchar(k);
}
putchar('\n');
}
return (0);
}