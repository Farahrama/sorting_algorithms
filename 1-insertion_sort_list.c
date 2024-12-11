#include "sort.h"
/**
 * insertion_sort_list - function that sort the list
 * @list: is pointer in list
 */
void insertion_sort_list(listint_t **list)
{
if (!list || !(*list) || !(*list)->next)
return;
listint_t *current = (*list)->next;
listint_t *temp;
while (current != NULL)
{
while (current != NULL && current->prev != NULL && current->n < current->prev->n)
{
temp = current->prev;
temp->next = current->next;
if (current->next != NULL)
current->next->prev = temp;
current->prev = temp->prev;
if (current->prev != NULL)
current->prev->next = current;
current->next = temp;
temp->prev = current;
if (current->prev == NULL)
*list = current;
print_list(*list);
}
current = current->next;
}
}
