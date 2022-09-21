#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_node - a function that inserts a number into a singly sorted list
 *@head: the head pointer
 *@number: the number inserted into the node
 *Return: address of the new node on success
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = number;


if (*head == NULL || (*head)->n >= new->n)
{
new->next = *head;
*head = new;
}
else
{
current = *head;

while (current->next != NULL && (current->next->n < new->n))
{
current = current->next;
}
new->next = current->next;
current->next = new;
}

return (new);
}
