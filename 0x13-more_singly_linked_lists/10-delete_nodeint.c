#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to head pointer
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *removeNode;
	unsigned int i;

	i = 0;
	tmp = *head;
	while (tmp)
	{
		if (index == 0)
		{
			removeNode = *head;
			*head = removeNode->next;
			free(removeNode);
			return (1);
		}
		if (i == index - 1)
		{
			removeNode = tmp->next;
			tmp->next = removeNode->next;
			free(removeNode);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
