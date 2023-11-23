#include    "libft.h"
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  **result;
    t_list  *new;
    t_list  *tmp;

    while (lst != 0)
    {
        new = ft_lstnew(f(lst->content));
        if (new == 0)
        {
            while (*result != 0)
            {
                tmp = *result;
                *result = (*result)->next;
                ft_lstdelone(tmp, del);
            }
            return (0);
        }
        ft_lstadd_front(result, new);
        lst = lst->next;
    }
    return (*result);
}
