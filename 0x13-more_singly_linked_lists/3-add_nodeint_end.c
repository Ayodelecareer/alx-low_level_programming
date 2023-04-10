#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - adds a new node to a singly linked list at the end of it
* @head: pointer to head of the singly linked list_t
* @n: number to add to the new node
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *bck;
listint_t *trt = malloc(sizeof(listint_t));

if (trt == 0)
return (0);

bck = *head;

trt->n = n;
trt->next = 0;

if (bck == 0)
{
*head = trt;
}
else
{
while (bck->next != 0)
bck = bck->next;
bck->next = trt;
}

return (trt);
}
