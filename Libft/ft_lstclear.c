#include    <stdlib.h>
#include    "libft.h"
void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *current_node;
    t_list  *tmp;

    current_node = *lst;
    
    while (current_node != 0)
    {
        tmp  = current_node;
        current_node = current_node->next;
        free(tmp->content);
        free(tmp);
    }

}
