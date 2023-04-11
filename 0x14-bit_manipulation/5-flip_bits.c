#include "main.h"

/**
* flip_bits - it returns the number of bits you would need to
* flip to get from one number to another
* @r: base 10 number
* @t: base 10 number
*
* Return: Number of bits you would need to flip
*
*/
unsigned int flip_bits(unsigned long int r, unsigned long int t)
{
unsigned long int s;
int count = 0;

s = r ^ t;

while (s != 0)
{
count += s & 1;
s = s >> 1;
}

return (count);
}
