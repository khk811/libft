#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list    *lst_element;

  lst_element = *lst;
  while (lst_element)
  {
    (*del)(lst_element->content);
    lst_element = lst_element->next;
    free(lst_element);
  }
  lst = NULL;
}
