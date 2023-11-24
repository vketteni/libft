/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:15:25 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/21 15:00:22 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char **ft_get_result_array(const char *s, char c);
void	ft_allocation_error(char **array);

char	**ft_split(char const *s, char c)
{
	char	**result;
	const char	*start;
	const char	*ptr;
	int	i;

	result = ft_get_result_array(s, c);
	if (result == 0)
		return (0);
	i = 0;
	ptr = s;
	start = s;
	int position = 0;
	while (*ptr)
	{
		if (*ptr == c)
		{
			int len = ptr - start;
			result[i] = ft_substr(s, position, len);
			if (result[i] == 0)
				ft_allocation_error(result);
			i++;

			start = ptr + 1;
			position += (len + 1);
		}
		ptr++;


	}
	result[i] = ft_substr(s, position, ptr - start);
	if (result[i] == 0)
		ft_allocation_error(result);
	return (result);
}

void	ft_allocation_error(char **array)
{
	int	i;

	i = 0;
	while (array[i] != 0)
		free(array[i++]);
	free(array);
}

char	**ft_get_result_array(char const *s, char c)
{
	char	**result;
	char const	*ptr;
	int	delimiter_count;

    delimiter_count = 0;
	ptr = s;
	while (*ptr++)
	{
		if (*ptr == c)
			delimiter_count++;
	}

	result = (char **)malloc(sizeof(char *) * (delimiter_count + 1) + 1);
	if (result == 0)
		return (0);
	result[delimiter_count + 1] = 0;
	return (result);
}

/*
int	main()
{
	char	**result;
	int i;
	char string[] = "-he-l--lo-";
	result = ft_split(string, '-');
	i = 0;
	while (result[i])
	{
		printf("result[%d] = '%s'", i, result[i]);
		i++;
	}
	return (0);
}
*/
