/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:52:59 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:53:01 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check(void)
{
	char	*buffer;

	buffer = (char *) malloc(sizeof(char) * 1);
	if (buffer == NULL)
		return (0);
	buffer[0] = '\0';
	return (buffer);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*buffer;

	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
	{
		return (ft_check());
	}
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	buffer = (char *) malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (0);
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
