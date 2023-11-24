#include    "libft.h"
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *current_node;

    if (lst == 0 || new == 0)
        return ; 
    current_node = *lst;
    while (current_node->next != 0)
        current_node = current_node->next;
    current_node->next = new;
}
