/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:52:03 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:52:16 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*k;
	char		ch;

	k = (char *)s;
	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			k = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	s = k;
	if (*s == ch)
		return ((char *)s);
	return ((void *)0);
}
