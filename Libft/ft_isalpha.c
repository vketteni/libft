/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:05:25 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/14 12:44:16 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha (unsigned int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
void main (void)
{
	char c;
	c = 'b';
	printf(ft_isalpha(c));
}
*/
