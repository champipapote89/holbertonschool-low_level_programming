#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_numbers - Entry point
*prints numbers from 0 to 9
*Return: always 0 (Succes)
*/
void print_numbers(void)
{
int i = 0;
while (i <= '9')
{
_putchar(i);
i++;
}
_putchar('\n');
return;
}
