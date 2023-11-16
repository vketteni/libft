/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:40:48 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/14 15:25:33 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	d = dst;
	s = src;

	if (d == s)
		return (dest);
	if (d <= s || d >= s + n)
	{
		while (n--)
			*s++ = *d++;
	}
	else
	{
		while (n--)
			*(--d) = *(--s);
	}
	return (dst);
}
