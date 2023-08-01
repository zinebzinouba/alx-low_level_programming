#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to head pointer
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL && *head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
