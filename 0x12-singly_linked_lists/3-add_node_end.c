#include "lists.h"
/**
 * add_node_end - add new node to the end
 * @head: pointer to first element
 * @str: the data
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *new_node, *prev_node;
new_node = malloc(sizeof(list_t));
if ((new_node == NULL) && (str == NULL))
return (NULL);
while (str[len])
len++;
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
prev_node = *head;
while (prev_node->next != NULL)
prev_node = prev_node->next;
prev_node->next = new_node;
}
return (new_node);
}
