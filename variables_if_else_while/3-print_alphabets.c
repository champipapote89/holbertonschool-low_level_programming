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
char i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
i = 'A';
while (i <= 'Z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}