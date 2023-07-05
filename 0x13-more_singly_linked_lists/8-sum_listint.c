#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of list with the type list_t
 * Return: sum of all the data (n) of a listint_t linked list.
 * or (0) if list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
