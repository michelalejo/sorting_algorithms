#include "sort.h"

/**
 *  insertion_sort - sorts a list using selection sort
 *  each swamp prints the list
 *  @list: is the given list
 *  Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *j_node, *tmp, *actual;
	int swap = 0;

	if (!list || !*list)
		return;

	node = *list;
	while (node->next)
	{
		actual = node;
		j_node = node;
		while (j_node)
		{
			if (j_node->n > j_node->next->n)
			{
				if (j_node == *list)
					*list = j_node->next;
				tmp = j_node->next;
				j_node->next->prev = j_node->prev;
				if (j_node->prev)
					j_node->prev->next = j_node->next;
				j_node->next = j_node->next->next;
				if (tmp->next)
					tmp->next->prev = j_node;
				j_node->prev = tmp;
				tmp->next = j_node;
				print_list(*list);
				if (!swap)
				{
					actual = j_node->prev;
					swap = 1;
				}
				else if (swap == 1)
				{
					actual = j_node;
					swap++;
				}
				j_node = j_node->prev->prev;
			}
			else
			{
				break;
			}
		}
		swap = 0;
		node =  actual->next;
	}
}
