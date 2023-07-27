/*
 * Auth: Zak mod
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head:list_t list to be freed list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
