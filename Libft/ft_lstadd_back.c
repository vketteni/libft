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

# include <stdio.h>
void    print_result(t_list *lst, t_list *expected_result)
{
    int i;

    i = 0;
    while (*expected_result != 0)
    {
        printf("List element\t(%d)\n", i++);
        printf("Expected:\t'%s'\n", (expected_result).content);
        printf("Result:\t'%s'\n", (lst).content);
        printf("\n");
        *expected_result = (expected_result)->next;
        *lst = (lst)->next;
    }
}
int main(void)
{
   // void    ft_lstadd_back(t_list **lst, t_list *new)
   // Test Case 1: Testing adding element to the back of empty list.
   t_list   *element_1 = ft_lstnew(ft_strdup("1"));
   t_list   *begin = 0;
   t_list   **expected_result;

   ft_lstadd_back(&begin, element_1);
   print_result(&begin, expected_result);
}


// Test Case 2: Testing adding element to the back of existing list.

