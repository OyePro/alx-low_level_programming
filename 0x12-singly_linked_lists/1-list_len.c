#include "lists.h"
/**
 *list_len - return number of elements in list
 *@h: pointer to head
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
