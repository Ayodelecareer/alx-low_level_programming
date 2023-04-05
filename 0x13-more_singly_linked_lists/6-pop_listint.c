#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to head of singly linked list
*
* Return: head node’s data (n)
*/
int pop_listint(listint_t **head)
{
listint_t *bck = *head;
listint_t *bckck;
int n;

if (head == NULL || bck == NULL)
return (0);

bckck = bck->link;
n = bck->n;
free(bck);
*head = bckck;

return (n);
}
