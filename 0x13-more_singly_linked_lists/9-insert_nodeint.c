#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len -  should return the number of elements in a linked listint_t list
 * @h: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
int count = 0;

while (h != 0)
h = h->next, count += 1;

return (count);
}

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to head of singly linked list
* @idx: index of the list where the new node should be added, starts at 0
* @n: value that the node will have
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int len = listint_len(*head), count = 0;
listint_t *trt, *bck, *bckck;

if (head == 0 && idx > 0)
return (0);

trt = malloc(sizeof(listint_t));
if (trt == 0)
return (0);

if (head == 0 && idx == 0)
{
trt->n = n, trt->next = 0, *head = trt;
return (trt);
}

if (idx > len)
{
free(trt);
return (0);
}
bck = *head;
trt->n = n;
while (count < idx && idx != 0)
{
bckck = bck, bck = bck->next;
count++;
}
if (idx == 0)
{
*head = trt;
trt->next = bck;
}
else
{
bckck->next = trt;
trt->next = bck;
}
return (trt);
}
