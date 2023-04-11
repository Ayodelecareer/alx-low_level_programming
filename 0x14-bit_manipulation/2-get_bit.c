#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @m: base 10 number
* @nlx: index to print
*
* Return: value of the bit at index index or -1 if an error occured
*
*/
int get_bit(unsigned long int m, unsigned int nlx)
{
unsigned int i = 0, bit;

if (nlx > 63)
return (-1);

for (i = 0; i < nlx; i++)
m = m >> 1;

if ((m & 1) == 1)
bit = 1;

if ((m & 1) == 0)
bit = 0;

return (bit);
}
