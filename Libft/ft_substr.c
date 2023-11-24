/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:03:33 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/21 13:50:13 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	char	*ptr;

	if (start > ft_strlen((char *)s))
		return (0);
	substring = (char *)malloc(len + 1);
	if (substring == 0)
		return (0);
	ptr = substring;
	while (len--)
		*(ptr++) = *((s++) + start);
	*ptr = '\0';
	return (substring);
}
