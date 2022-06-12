/*
 * File: 6-print-numberz.c
 */
#include <stdio.h>
/**
 * main -Prints all single digit numbers of base 10 starin from 0,
 * only using putchar and with char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
