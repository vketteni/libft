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

static char	*ft_add_negative_sign(char *ascii_nbr, size_t arr_size)
{
	size_t last_index;

	last_index = arr_size - 2;
	while (last_index-- > 0)
		ascii_nbr[last_index + 1] = ascii_nbr[last_index];
	ascii_nbr[0] = '-';
	return (ascii_nbr);
}

static char	*ft_make_atoi_arr(size_t arr_size)
{
	char	*arr;

	arr = ft_calloc(arr_size, sizeof(char));
	if (arr == 0)
		return (0);
	arr[arr_size - 1] = '\0';
	return (arr);
}

static void	*ft_reverse(void *s, size_t len)
{
	size_t	i;
	size_t	j;
	char	tmp;
	char	*src;

	src = (char *)s;
	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = src[i];
		src[i++] = src[j];
		src[j--] = tmp;
	}
	return (src);
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
	ft_reverse(arr, last_index + 1);
	if (is_negative)
		ft_add_negative_sign(arr, arr_size);
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	arr_size;
	int	is_negative;
	long	nbr;

	if (n == 0)
		return (ft_strdup("0"));
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

#include <stdio.h>
#include <limits.h>
#include <string.h>

/*
int	main()
{
	char	*result;
	int n;
	char *expected;

	// char	*ft_itoa(int n)
	n = -9;
	expected = "-9";
	printf("Test Case 1: Testing negative int (%d)\n", n);
	result = ft_itoa(n);
	printf("Expected:\t'%s'\nResult:\t\t'%s'\nPass:\t\t%s\n", expected, result, strcmp(expected, result) == 0 ? "Yes" : "No");
	printf("\n\n");

	n = 9;
	expected = "9";
	printf("Test Case 2: Testing positive int (%d)\n", n);
	result = ft_itoa(n);
	printf("Expected:\t'%s'\nResult:\t\t'%s'\nPass:\t\t%s\n", expected, result, strcmp(expected, result) == 0 ? "Yes" : "No");
	printf("\n");

	n = INT_MAX;
	expected = "2147483647";
	printf("Test Case 3: Testing int max (%d)\n", n);
	result = ft_itoa(n);
	printf("Expected:\t'%s'\nResult:\t\t'%s'\nPass:\t\t%s\n", expected, result, strcmp(expected, result) == 0 ? "Yes" : "No");
	printf("\n");

	n = INT_MIN;
	expected = "-2147483648";
	printf("Test Case 4: Testing int min (%d)\n", n);
	result = ft_itoa(n);
	printf("Expected:\t'%s'\nResult:\t\t'%s'\nPass:\t\t%s\n", expected, result, strcmp(expected, result) == 0 ? "Yes" : "No");
	printf("\n");

	n = 0;
	expected = "0";
	printf("Test Case 5: Testing zero (%d)\n", n);
	result = ft_itoa(n);
	printf("Expected:\t'%s'\nResult:\t\t'%s'\nPass:\t\t%s\n", expected, result, strcmp(expected, result) == 0 ? "Yes" : "No");
	printf("\n");

	return (0);
}
*/
