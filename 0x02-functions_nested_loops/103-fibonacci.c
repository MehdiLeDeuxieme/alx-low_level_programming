#include <stdio.h>
/**
* main - sum of the even-valued terms
* Return:0 (Success)
*/
int main(void)
{
int prev = 1;
int curr = 2;
int temp;
long long sum = 0;
while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}
temp = curr;
curr = prev + curr;
prev = temp;
}
printf("%lld\n", sum);
return (0);
}
