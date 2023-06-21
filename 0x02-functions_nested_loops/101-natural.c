#include <stdio.h>
/**
* main - sum of all the multiples of 3 or 5 below 1024
* Return:0 (Success)
*/
int main(void)
{
int sum = 0;
int number;
for (number = 1; number < 1024; number++)
{
if (number % 3 == 0 || number % 5 == 0)
{
sum += number;
}
}
printf("%d\n", sum);
return (0);
}
