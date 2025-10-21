#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*prints the alphabet in lowercase and uppercase
*Return: always 0 (Succes)
*/
int main(void)
{
char i = 97;
while (i <= 122)
{
putchar(i);
i++;
}
i = 65;
while (i <= 90)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
