/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:18:16 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/17 14:02:30 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*string_duplicate;
	size_t	arr_size;

	if (s == 0)
		return (0);
	arr_size = ft_strlen(s) + 1;
	string_duplicate = (char *)malloc(arr_size);
	if (string_duplicate == 0)
		return (0);
	ft_strlcpy(string_duplicate, s, arr_size);
	return (string_duplicate);
}
