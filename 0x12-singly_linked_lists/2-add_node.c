#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head of list with the type list_t
 * @str: pointer to char
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *new_node;
new_node = malloc(sizeof(list_t));
if ((new_node == NULL) && (str == NULL))
return (NULL);
while (str[len])
len++;
new_node->str = strdup(str);
new_node->len = len;
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
