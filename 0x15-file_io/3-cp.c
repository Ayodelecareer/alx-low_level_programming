#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* main - A program that copies the content of a file to another file
*
* @argc: It Counts the number of parameters that go into main
* @argv: Pointer of array of pointers containing strings entering main
* Return: Always 0 on (Success)
*
* if the number of argument is not the correct one, exit with code 97
* and print Usage: cp file_from file_to, followed by a new line,
* on the POSIX standard error
*
* if file_from does not exist, or if you can not read it, exit with
* code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
* followed by a new line, on the POSIX standard error
*
* if you can not close a file descriptor ,
* exit with code 100 and print Error:
* Can't close fd FD_VALUE, followed by a new line,
* on the POSIX standard error
*/
int main(int argc, char **argv)
{
int pdfrom, pdto, checkA, checkB, checkC, checkD;
char buff[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

pdfrom = open(argv[1], O_RDONLY);
if (pdfrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

pdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (pdto == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);


while ((checkA = read(pdfrom, buff, 1024)) > 0)
{
checkB = write(pdto, buff, checkA);
if (checkB != checkA)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (checkA == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
checkC = close(pdfrom);
if (checkC == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pdfrom), exit(100);
checkD = close(pdto);
if (checkD == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pdto), exit(100);

return (0);
}
