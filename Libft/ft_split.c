/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:15:25 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/20 14:21:51 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*start;
	char	*ptr;
	int	i;

	result = ft_get_result_array(s, c); 
	if (result == 0)
		return (0);
	i = 0;
	ptr = s;
	start = s;
	while (*ptr)
	{
		if (*ptr == c)
		{
			result[i] = ft_substr(s, start, ptr - start); 
			if (result[i] == 0)
				ft_allocation_error(result);
			i++;
		}
		ptr++;
	}
	result[i] = ft_substr(s, start, ptr - start); 
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

char	*ft_get_result_array(char const *s, char c)
{
	char	**result;
	char	*ptr;
	int	delimiter_count;

	ptr = s;
	while (*ptr++)
	{
		if (*ptr == c)
			delimiter_count++;
	}

	result = (char **)malloc(sizeof(char *) * (delimiter_count + 1) + 1);
	if (result == 0)
		return (0);
	result[delimiter_count] = 0;
	return (result);
}

