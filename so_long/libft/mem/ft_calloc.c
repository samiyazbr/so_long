/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:43:42 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:43:44 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*buffer;

	i = 0;
	buffer = (void *) malloc(count * size);
	if (buffer == NULL)
		return (0);
	while (count * size > i)
	{
		((char *)buffer)[i] = '\0';
		i++;
	}
	return (buffer);
}
