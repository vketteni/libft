/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:36:10 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/26 13:38:50 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	is_negative;
	int	result;

	while(*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;	
	if (ft_strncmp((char *)nptr, "2147483648", 10) == 0)
		return (INT_MIN);
	is_negative = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = -1;
		nptr++;
	}	
	result = 0;
	while (ft_isdigit(*nptr))
		result += (*(nptr++) - '0');
	return (result * is_negative);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
	char escape[] = "\n\t\v\r\f ";
	char integer[] = "1";
	char	*arr = (char *)malloc(sizeof(char) * (ft_strlen(escape) + ft_strlen(integer)) + 1);
	if (arr == 0)
		return (0);
	ft_memset(arr, '0', ft_strlen(escape) + ft_strlen(integer));
	ft_strlcpy(arr, escape, ft_strlen(arr) + 1);
	ft_strlcat(arr, integer, ft_strlen(arr) + 1);
	printf("%d\n", ft_atoi(arr));
}
*/
