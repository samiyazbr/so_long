/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:43:18 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 09:56:29 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_longlong(const char *str, int a, int sign, int digits)
{
	if (a >= 19)
	{
		if (sign > 0)
		{
			if (ft_strncmp((str - a), "9223372036854775807", 19) >= 0 || a > 19)
				return (-1);
		}
		else
		{
			if (ft_strncmp((str - a), "9223372036854775808", 19) < 0 || a > 19)
				return (0);
		}
	}
	return (digits);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	digits;
	int	a;

	sign = 1;
	digits = 0;
	a = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		digits = digits * 10 + sign * (*str - 48);
		str++;
		a++;
	}
	digits = ft_longlong(str, a, sign, digits);
	return (digits);
}
