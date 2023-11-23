#include    "libft.h"
int ft_lstsize(t_list *lst)
{
    int size;

    if (lst == 0)
        return (0);
    size = 1;
    while (lst->next != 0)
    {
        lst = lst->next;
        size++;
    }
    return (size);
}
