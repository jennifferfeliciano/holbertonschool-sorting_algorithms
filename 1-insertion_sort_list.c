#include "sort.h"

void insertion_sort_list(listint_t **list) 
{
	if (*list == NULL || (*list)->next == NULL) 
	{
		return;
	}

	listint_t *sorted = NULL;
	listint_t *current = *list;

	while (current != NULL) 
	{
		listint_t *next = current->next;

		if (sorted == NULL || sorted->n >= current->n) 
		{
			current->next = sorted;
			if (sorted != NULL) 
			{
				sorted->prev = current;
			}
			sorted = current;
		}
		else 
		{
			listint_t *temp = sorted;
			while (temp->next != NULL && temp->next->n < current->n) 
			{
				temp = temp->next;
			}
			current->next = temp->next;
			if (temp->next != NULL) 
			{
				temp->next->prev = current;
			}
			temp->next = current;
			current->prev = temp;
		}

		print_list(*list);

		current = next;
	}

	*list = sorted;
}
