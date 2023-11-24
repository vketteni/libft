/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:15:49 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/20 11:14:38 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//int	ft_char_in_set(char const c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_string;
	size_t	arr_size;
	char	*start;
	char	*end;

	while (*s1 && ft_char_in_set(*s1, set))
		s1++;
	start = (char *)s1;
	while (*s1)
		s1++;
	while(*s1 && ft_char_in_set(*s1, set))
		s1--;
	end = (char *)s1;
	arr_size = end - start + 1;
	trimmed_string = (char *)malloc(arr_size);
	s1 = start;
	while (s1 < end)
		*trimmed_string++ = *s1++;
	*trimmed_string = '\0';
	return (trimmed_string);
}

int	ft_char_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
