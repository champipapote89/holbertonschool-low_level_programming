#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
char i = 48;
int j = 0;
int l = 0;
char k = 48;
for (j = 0, i = 48; j <= 10, i <= 57; j++, i++)
{
for (l = 0, k = 48; l <= 10, k <= 57; l++, k++)
{
putchar(i);
putchar('\n');
}
putchar('\n');
return (0);
}
}