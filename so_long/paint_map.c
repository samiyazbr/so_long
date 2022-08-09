/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:08:22 by szubair           #+#    #+#             */
/*   Updated: 2022/08/07 19:06:19 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	paint_background(t_mlx *mlx, t_map *map, t_img *img)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			mlx_put_image_to_window(\
			mlx->mlx, mlx->win, img->road, j * 32, i * 32);
			j++;
		}
		i++;
	}
}

void	paint_map(t_mlx *mlx, t_map *map, t_img *img)
{
	int	i;
	int	j;

	paint_background(mlx, map, img);
	i = -1;
	while (++i < map->height)
	{
		j = -1;
		while (++j < map->width)
		{
			if (map->map[i][j] == '1')
				mlx_put_image_to_window(\
				mlx->mlx, mlx->win, img->wall, j * 32, i * 32);
			else if (map->map[i][j] == 'P')
				mlx_put_image_to_window(\
				mlx->mlx, mlx->win, img->player, j * 32, i * 32);
			else if (map->map[i][j] == 'C')
				mlx_put_image_to_window(\
				mlx->mlx, mlx->win, img->collect, j * 32, i * 32);
			else if (map->map[i][j] == 'E')
				mlx_put_image_to_window(\
				mlx->mlx, mlx->win, img->exit, j * 32, i * 32);
		}
	}
}
