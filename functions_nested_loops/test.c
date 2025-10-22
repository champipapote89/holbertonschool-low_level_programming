#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
long int i = -2147483648;
i = i % 10;
printf ("%ld", i);
return (0);
}