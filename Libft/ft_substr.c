/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:03:33 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/17 14:12:58 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	substring = (char *)malloc(len + 1);
	if (substring == 0)
		return 0;
	while (len--)
		*(substring++) = *((s++) + start);
	return (substring);
}
