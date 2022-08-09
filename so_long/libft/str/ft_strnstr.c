/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:51:55 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:51:56 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	if (needle[j] == ' ' || needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len != 0)
	{
		length = len;
		while (haystack[i + j] != '\0' && len != 0 \
				&& haystack[i + j] == needle[j])
		{
			j++;
			len--;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		j = 0;
		i++;
		len = length;
		len--;
	}
	return ((void *)0);
}
