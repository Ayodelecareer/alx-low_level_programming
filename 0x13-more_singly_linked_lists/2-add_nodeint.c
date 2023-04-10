#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a singly linked list
* @head: pointer to head of singly linked list
* @n: number to add as new node in the list
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *trt = malloc(sizeof(listint_t));
trt->data = n;
trt->link = NULL;

trt->link = head;
head = trt;
return head;
}
