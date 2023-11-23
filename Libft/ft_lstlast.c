#include    "libft.h"
t_list  *ft_lstlast(t_list *lst)
{
    t_list  *current_node;

    if (lst == 0)
        return (0);
    current_node = lst;
    while (current_node->next != 0)
        current_node = current_node->next;
    return (current_node);
}
