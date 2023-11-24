/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:51:32 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/21 18:21:52 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

//void	*ft_reverse_array(void *s, size_t len);
//char    *ft_make_atoi_arr(size_t arr_size);
//char    *ft_itoa_conversion(char *arr, long n, size_t arr_size, int is_negative);
//char    *ft_add_negative_sign(char *ascii_nbr, size_t arr_size);

char	*ft_itoa(int n)
{
	char	*result;
	size_t	arr_size;
	int	is_negative;
	long	nbr;

	is_negative = 0;
	nbr = (long)n;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	arr_size = 12;
	result = ft_make_atoi_arr(arr_size);
	if (result == 0)
		return (0);
	ft_itoa_conversion(result, nbr, arr_size, is_negative);
	return (result);
}

char	*ft_add_negative_sign(char *ascii_nbr, size_t arr_size)
{
	size_t last_index;

	last_index = arr_size - 2;
	while (last_index > 0)
	{
		ascii_nbr[last_index] = ascii_nbr[last_index - 1];
		last_index--;
	}
	ascii_nbr[0] = '-';
	return (ascii_nbr);
}

char	*ft_make_atoi_arr(size_t arr_size)
{
	char	*arr;

	arr = ft_calloc(arr_size, sizeof(char));
	if (arr == 0)
		return (0);
	arr[arr_size - 1] = '\0';
	return (arr);
}

char	*ft_itoa_conversion(char *arr, long n, size_t arr_size, int is_negative)
{
	size_t	i;
	size_t	last_index;

	i = 0;
	while (n > 0)
	{
		arr[i++] = '0' + (n % 10); 
		n /= 10;
	}
	last_index = arr_size - 2;
	while (arr[last_index] == 0)
		last_index--;
	ft_reverse_array(arr, last_index);
	if (is_negative)
		ft_add_negative_sign(arr, arr_size);
	return (arr);
}

void	*ft_reverse_array(void *s, size_t len)
{
	size_t	i;
	char	tmp;
	char	*src;

	src = (char *)s;
	i = 0;
	while (len >= i)
	{
		tmp = src[i];
		src[i++] = src[len];
		src[len--] = tmp;
	}
	return (src);
}

/*
#include <stdio.h>
int	main()
{
	int	n;
	char	*result;
	
	n = -2147483648;
	result = ft_itoa(n);
	printf("Return value: '%ld'\n", ft_strlen(result));
	printf("Return value: '%s'\n", result);
}
*/
