#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* print_listint_safe - prints a singly linked list (can print lists with loop)
* @head: head pointer of singly linked list
*
* Return: Number of elements in list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *bck, *bckck;
unsigned int count = 0;

bck = head;
if (bck == 0)
return (0);

while (bck != 0)
{
bckck = bck;
bck = bck->next;

count++;

printf("[%p] %d\n", (void *)bckck, bckck->n);

if (bckck <= bck)
{
printf("-> [%p] %d\n", (void *)bck, bck->n);
break;
}
}

return (count);
}
