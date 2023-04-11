#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: base 10 number
 * @ndx: index to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */
int set_bit(unsigned long int *n, unsigned int ndx)
{
unsigned long int brass;


if (ndx > 63)
return (-1);

brass = 1 << ndx;

*n = *n | brass;

return (1);
}
