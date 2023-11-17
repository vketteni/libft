/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:36:10 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/17 12:48:13 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	is_negative;
	int	result;

	while(*nptr == ' ' || (*nptr >= '\b' && *nptr <= '\r'))
		nptr++;	
	if (ft_strncmp(nptr, "2147483648", 10) == 0)
		return (INT_MIN);
	is_negative = 0;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = 1;
		*nptr++;
	}	
	result = 0;
	while (ft_isdigit(*nptr))
		result += ('0' + *(nptr++))
	return (result * is_negative);
}
