#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: Index of the position to insert the new node.
 * @n: Value to be stored in the new node.
 * Return: The address of the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp = *h;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;
		if(idx == 0)
		{
			if (temp == NULL)
				temp = new_node;
			temp->prev = new_node;
			new_node->next = temp;

		}
		
		unsigned int count = 1;
		while(temp != NULL && count != idx)
		{
			count++;
			temp = temp->next;
		}
		while (count == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if(temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return new_node;
		}
		return NULL;
}

