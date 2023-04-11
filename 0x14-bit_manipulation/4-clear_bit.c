#include "main.h"

/**
* clear_bit - It sets the value of a bit to 0 at a given index
* @n: base 10 number
* @nlg: index to set to 1
*
* Return: 1 if it worked, or -1 if an error occurred
*
*/
int clear_bit(unsigned long int *n, unsigned int nlg)
{
unsigned long int brass;

if (nlg > 63)
return (-1);

brass = 1 << nlg;

*n = *n & ~brass;

return (1);
}
