/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:36:10 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/27 14:14:27 by vketteni         ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
        char    *nbr_buffer; 
        size_t  buffer_size = 15; 

        if (!(nbr_buffer = (char *) malloc(sizeof(char) * buffer_size)))
                return (0); 
        ft_memset(dst, 0, buffer_size);
// int	ft_atoi(const char *nptr)
// Testing string with escape characters infront of the digits.
	if (false)
	{
		char escape[] = "\n\t\v\r\f ";
		char integer[] = "1";
		ft_strlcpy(nbr_buffer, escape, ft_strlen(arr) + 1);
		ft_strlcat(nbr_buffer, integer, ft_strlen(arr) + 1);
		printf("%d\n", ft_atoi(arr));
	}

// Testing negative number
	if (false)
	{

	}
// Testing positive number
	if (false)
	{

	}
// Testing integer min
	if (false)
	{

	}
// Testing integer max
	if (false)
	{

	}
// Testing bad char at the start
	if (false)
	{

	}
// Testing bad char after whitespace
	if (false)
	{

	}
// Testing bad char after sign
	if (false)
	{

	}
// Testing bad char after number
	if (false)
	{

	}
}
