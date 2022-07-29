/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:14:49 by szubair           #+#    #+#             */
/*   Updated: 2022/07/28 11:14:50 by szubair          ###   ########.fr       */
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
