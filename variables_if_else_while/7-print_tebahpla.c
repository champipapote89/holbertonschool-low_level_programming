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
char i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
