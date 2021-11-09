#include "lists.h"


/**
 * print_list - prints every element in list_t
 *
 * @h: Function pointer
 */

size_t print_list(const list_t *h)
{
  size_t nodeNo = 0;

  while (h != NULL)
    {
      if (h->str == NULL)
	{
	  printf("[0] (nil)\n");
	}
      else
	{
	  printf("[%d] %s\n", h->len, h->str);
	}
        nodeNo++;
	h = h->next;
    }
return (nodeNo);
}
