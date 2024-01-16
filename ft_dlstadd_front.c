/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:23:09 by vketteni          #+#    #+#             */
/*   Updated: 2024/01/15 09:37:52 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	**ft_dlstadd_front(t_dlist **lst, t_dlist *new)
{
	t_dlist	*current_node;

	if (lst == 0 || new == 0)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		current_node = *lst;
		while (current_node->prev != NULL)
			current_node = current_node->prev;
		current_node->prev = new;
		new->next = current_node;
		new->prev = NULL;
	}
	return (lst);
}
