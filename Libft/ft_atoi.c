/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:36:10 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/24 18:00:53 by vketteni         ###   ########.fr       */
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
		result += ('0' + *(nptr++));
	return (result * is_negative);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char escape[] = "\9\10\11\12\13";
	char integer[] = "1";
	char	*combined = ft_strlcat(
	ft_strlcat
	printf("%d\n", ft_atoi((e+"1").c_str()));
}
