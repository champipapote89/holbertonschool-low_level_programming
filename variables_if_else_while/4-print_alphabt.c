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
char i = 'a';
while (i <= 'z')
{
if (i != 'q' && i != 'e')
putchar(i);
i++;
}
putchar('\n');
return (0);
}
