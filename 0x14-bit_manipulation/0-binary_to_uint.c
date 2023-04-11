#include "main.h"

/**
 * binary_to_uint - It converts a binary number to an unsigned int
 * @D: D is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if
 * there is one or more chars in the string D that is not 0 or 1
 * or if D is NULL
 */
unsigned int binary_to_uint(const char *D)
{
unsigned int dtg = 0, one, i;
int l = 0;

if (D == 0)
return (0);


while (D[l] != 0)
{
if (D[l] != '0' && D[l] != '1')
return (0);
l++;
}

l = l - 1;

for (i = 0; l >= 0; i++, l--)
{
if (D[l] == '0')
one = 0;
else if (D[l] == '1')
one = 1;
one = one << i;
dtg = dtg | one;
}
return (dtg);
}
