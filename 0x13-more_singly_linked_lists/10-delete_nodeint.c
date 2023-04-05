#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len -  returns the number of elements in a linked listint_t list
* @h: head pointer of singly linked list
*
* Return: Number of elements in list
*/
size_t listint_len(const listint_t *h)
{
unsigned int range = 0;

while (h != 0)
h = h->next, range++;

return (range);
}

/**
* delete_nodeint_at_index - deletes the node at index index of
* a listint_t linked list
* @head: pointer to head of singly linked list
* @index: index of the list where we want to delete a node
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int len = listint_len(*head), count = 0;
listint_t *bck, *bckck, *bckckck;

if (*head == 0)
return (-1);

if (len == 1 && index == 0)
{
free(*head);
*head = 0;
return (1);
}

if (index > len - 1)
return (-1);

ilst = *head;
while (count < index && index != 0)
{
bckck = bck;
bck = bck->next;
bckckck = bck->next;
count++;
}
if (index == 0)
{
*head = bck->next;
free(bck);
}
else
{
lstst->next = bckckck;
free(bck);
}
return (1);
}
