#include <stdio.h>
/**
* main - fibonacci
* Return:0 (Success)
*/
int main(void)
{
int fibonacci[50];
int i;
fibonacci[0] = 1;
fibonacci[1] = 2;
for (i = 2; i < 50; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}
for (i = 0; i < 49; i++)
{
printf("%d, ", fibonacci[i]);
}
printf("%d\n", fibonacci[49]);
return (0);
}
