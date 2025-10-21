#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*main - Entry point
*prints the alphabet in lowercase
*Return: always 0 (Succes)
*/
int print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
return(0);
}
