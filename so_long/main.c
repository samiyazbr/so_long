/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samiyazubair <samiyazubair@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:07:59 by samiyazubai       #+#    #+#             */
/*   Updated: 2022/08/07 17:08:01 by samiyazubai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Error\nMap not found\n", 20);
		exit(EXIT_FAILURE);
	}
	else if (argc == 2)
		so_long(argv[1]);
	else
	{
		write(1, "Error\nToo many arguments\n", 25);
		exit(EXIT_FAILURE);
	}
	return (0);
}
