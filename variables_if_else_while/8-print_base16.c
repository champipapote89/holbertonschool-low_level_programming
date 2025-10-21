#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*prints the alphabet in lowercase
*Return: always 0 (Succes)
*/
int main(void)
{
char i = '0';
char o = 'a';
while (i <= '9')
{
putchar(i);
i++;
}
while (o <= 'f')
{
putchar(o);
o++;
}
putchar('\n');
return (0);
}
