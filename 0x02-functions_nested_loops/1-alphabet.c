#include <stdio.h>
#include "main.h"
/**
 * main - function that prints the alphabet in lowercase followed by a new line
 * Return:0 (Success)
 */
int main(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
