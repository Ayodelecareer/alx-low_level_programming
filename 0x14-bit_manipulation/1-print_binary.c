#include "main.h"

/**
* rev_bin - to print binary representation of number with & and Shift Right
* operators, but uses recursion to reverse the result
*
* @qll: decimal number
* @jack: checks for special case number 0
*
* Return: No return
*/
void rev_bin(unsigned long int qll, int jack)
{
if (jack == 1)
{
_putchar('0');
return;
}

if (qll == 0)
return;

rev_bin(qll >> 1, jack);

if ((qll & 1) == 0)
_putchar('0');

if ((qll & 1) == 1)
_putchar('1');
}
/**
* print_binary - it prints the binary representation of a number
* @qll: base 10 number
*
* Return: No return
*
*/
void print_binary(unsigned long int qll)
{
if (qll == 0)
rev_bin(qll, 1);
else
rev_bin(qll, 0);
}
