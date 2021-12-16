#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list    **last;

  last = lst;
  while (*last)
    last = &(*last)->next;
  new->next = *last;
  *last = new;
  return ;
}
