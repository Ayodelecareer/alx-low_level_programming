#include "main.h"

/**
* get_endianness - to check the endianness
*
* void: No argument
*
* Return: 0 if big endian, 1 if little endian present
*
*/
int get_endianness(void)
{
unsigned int r = 1, endian;
char *c = (char *)&r;


if (*c)
endian = 1;
else
endian = 0;

return (endian);
}
