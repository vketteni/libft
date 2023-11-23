#include    "libft.h"
void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *current_node;

    current_node = lst;
    while(current_node != 0)
    {
        f(current_node->content);
        current_node = current_node->next;
    }
}
