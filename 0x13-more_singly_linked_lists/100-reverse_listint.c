#include "lists.h"
#include <stddef.h>

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to head of singly linked list
*
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *tap, *tab;

if (*head == 0)
return (0);

if ((*head)->next == 0)
return (*head);

tap = *head;
tab = tap->next;
tap->next = 0;
while (1)
{
if (tab->next == 0)
{
tab->next = *head;
*head = tab;
break;
}
tap = tab;
tab = tap->next;
tap->next = *head;
*head = tap;
}

return (*head);
}
