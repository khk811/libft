#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *result;
    int i;

    if (!lst || !f)
        return (0);
    result = (t_list *)malloc(sizeof(t_list));
    if (!result)
        return (NULL);
    i = 0;
    while (lst)
    {
        result->content = (*f)(lst->content);
        lst = lst->next;
        result = result->next;
    }
    return (result);
}
