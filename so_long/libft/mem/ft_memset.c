/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:44:29 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:49:32 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (len != 0)
	{
		len--;
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
