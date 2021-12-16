#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list    *next_node;

	while (*lst)
	{
		next_node = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
	lst = NULL;
}
