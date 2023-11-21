/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:20 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/16 12:26:39 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strlcat(char *dst, char *src, size_t dst_size)
{
    size_t	i;
    size_t	j;
    i = 0;
    j = 0;

    while (dst[i])
        i++;
    if (i < dst_size)
    {
        while (src[j] && i + j < dst_size - 1)
        {
            *(dst + i + j) = *(src + j);
            j++;
        }
        *(dst + i + j) = '\0';
    }
    while (src[j])
        j++;
    return (i + j);
}
