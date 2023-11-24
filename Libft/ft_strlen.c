/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:34:17 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/24 11:34:31 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t ft_strlen(const char *str)
{
	if (str == 0)
		return (0);
	char	*start;
	start = (char *)str;
	while (*(str))
		str++;
	return (str - start);
}

/*
#include <stdio.h>
#include <string.h>
int main (void)
{
        char* c;
        c = "";
        printf("%ld\n", ft_strlen(c));
        printf("%ld\n", strlen(c));
}
*/
