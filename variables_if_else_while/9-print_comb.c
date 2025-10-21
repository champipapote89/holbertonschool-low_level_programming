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
while (i <= '9')
{
putchar(i);
if (i <= '8')
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
