#include <stdlib.h>

#include <time.h>
/**
 * main - This code will tell if the number is positive, negative or equal to 0
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
	return (0);
}
