#include<stdio.h>
/**
 * main - print all single digit numbers of base 
 * 10 starting from 0, followed by a new line
 * Return: always 0 (Success)
 */
int main(void)
{
int a;
for  (a = 0; a < 10, a++)
putchar("%d", a);
putchar("\n");
}
