#include    <stdlib.h>
#include    "libft.h"
t_list  *ft_lstnew(void *content)
{
    t_list *result;
    result = (t_list *)malloc(sizeof(t_list));
    if (result == 0)
        return (0);

    result->content = content;
    result->next = 0;
    return (result);
}
