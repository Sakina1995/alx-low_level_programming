#include <stdio.h>
/**
* main - print first 50 Fibonacci numbers
*
* Return: always 0
*/
int main(void)
{
int i;
unsigned long x = 1;
unsigned long y = 2;
unsigned long z = 3;
printf("1, 2, ");
for (i = 0; i < 48; i++)
{
z = x + y;
printf("%ld", z);
x = y;
y = z;
if (i != 47)
printf(", ");
}
printf("\n");
return (0);
}
