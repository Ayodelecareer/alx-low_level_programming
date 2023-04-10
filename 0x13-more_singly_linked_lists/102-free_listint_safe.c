#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list (can free lists with a loop)
 * @h: pointer to head of singly linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *bck = *h, *bck2;
unsigned int count = 0;

if (bck == 0 || h == 0)
return (0);

bck = *h;
while (bck != 0)
{
bck2 = bck;
bck = bck->next;
count++;

free(bck2);

if (bck2 <= bck)
break;
}

*h = 0;
return (count);
}
