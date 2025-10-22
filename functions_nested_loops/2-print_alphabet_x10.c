#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - Entry point
*prints the alphabet 10 times in lowercase
*Return: always 0 (Succes)
*/
void print_alphabet_x10(void)
{
int i = 0;
for (i = 0 ; i < 10 ; i++)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
return;
}
