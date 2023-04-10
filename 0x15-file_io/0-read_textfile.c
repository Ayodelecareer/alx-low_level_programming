#include "main.h"
#include <stdlib.h>

/**
* read_textfile - to read a text file and prints it
* to the POSIX standard output
* @filename: it is the name of the file
* @letters: it is the number of letters it should read and print
*
* Return: returns the actual number of letters it could read and print
* 0 if file cannot be opened or read
* 0 if filename is NULL
* 0 if write fails or does not write expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int wd, checkA, checkB;
char *c;

if (filename == 0)
return (0);

c = malloc(letters + 1);

if (c == 0)
return (0);

wd  = open(filename, O_RDONLY);

if (wd == -1)
return (free(c), 0);

checkA = read(wd, c, letters);

if (checkA == -1)
return (free(c), 0);

c[letters] = '\0';

checkB = write(STDOUT_FILENO, c, checkA);
if (checkB == -1)
return (free(c), 0);

free(c);
close(wd);
return (checkB);
}
