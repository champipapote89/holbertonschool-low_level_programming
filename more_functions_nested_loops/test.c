#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("valeur of p: %p\n", p);
   printf("valeur of c: %c\n", c);
   printf("address of p: %p\n", &p);
    printf("address of c: %p\n", &c);
   modif_my_char_var(p, c);
   printf("valeur of p after: %p\n", p);
   printf("valeur of c after: %c\n", c);
   printf("address of p after: %p\n", &p);
    printf("address of c after: %p\n", &c);
   return (0);
}


