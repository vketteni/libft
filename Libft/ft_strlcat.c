/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:20 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/26 17:38:23 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;
	i = 0;
	j = 0;

	if (!dst || !src)
		return (0);
	if (dst_size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < dst_size - 1)
		i++;
	while (src[j] && i + j < dst_size - 1)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	*(dst + ft_strlen(dst) + j) = '\0';
	while (src[j])
		j++;
	return (i + j);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	{ a 0 0 0 } concat ''	-> 1, { a 0 0 0 }
	
	{ a b 0 0 } concat abc	-> 5, { a b a 0 }
	
	{ a b c 0 } concat abc	-> 6, { a b c 0 }

	{ 0 0 0 0 } concat abc	-> 3, { a b c 0 }

	char	*dst; 
	if (!(dst = (char *) malloc(sizeof(char) * 15)))
		return (0); 
	ft_memset(dst, 0, 15);
	ft_memset(dst, 'r', 6);
	dst[10] = 'a';	
	ft_strlcat(dst, "lorem ipsum dolor sit amet", 0);
	printf("%s\n", dst);
	return (0);
}
*/
