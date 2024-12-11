#include "sort.h"
/**
 * insertion_sort_list - function that sort the list
 * @list: is pointer in list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current;
listint_t *temp;
if (!list || !(*list) || !(*list)->next)
return;
current = (*list)->next;
while (current != NULL)
{
while (current->prev != NULL && current->n < current->prev->n)
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
