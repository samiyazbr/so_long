/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:43:50 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:49:14 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	ch;

	i = 0;
	k = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (*k == ch)
			return (k);
		k++;
		i++;
	}
	return ((void *)0);
}
