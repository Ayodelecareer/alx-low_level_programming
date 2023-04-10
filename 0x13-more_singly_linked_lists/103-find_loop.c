#include "lists.h"
#include <stdio.h>
/**
* find_listint_loop - finds address of starting node in looped linked list
* @head: pointer to the head in linked list to test
*
* Return: The address of the node where the loop starts,
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *up, *down;

if (!head)
return (NULL);

up = down = head;

while (down && up && up->next)
{
down = down->next;
up = (up->next)->next;

if (up == down)
{
down = head;

while (down && up)
{
if (down == up)
return (down);

down = down->next;
up = up->next;
}
}
}

return (NULL);
}
