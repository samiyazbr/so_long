/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:07:35 by szubair           #+#    #+#             */
/*   Updated: 2022/08/07 19:07:04 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	valid_exit(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			if (map->map[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	game_clear(void)
{
	write(1, "\033[93mYou Win!\033[0m\n", 18);
	exit(EXIT_SUCCESS);
}

static void	print_step(t_map *map)
{
	char	*str;

	map->step = map->step + 1;
	str = ft_itoa(map->step);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	free(str);
}

static void	player_location(t_map *map, int x, int y)
{
	if (x >= 0 && y >= 0 && x < map->height && y < map->width)
	{
		if (map->map[x][y] == 'E')
		{
			if (valid_exit(map))
				game_clear();
		}
		else if (map->map[x][y] == 'A')
		{
			write(1, "\033[0;31mGame Over\033[0m\n", 21);
			exit(EXIT_SUCCESS);
		}
		else if (map->map[x][y] != '1')
		{
			map->map[map->x][map->y] = '0';
			map->x = x;
			map->y = y;
			map->map[x][y] = 'P';
			paint_map(&map->mlx, map, &map->img);
			print_step(map);
		}
	}
}

int	key_press(int keycode, t_map *map)
{
	// printf("Key pressed: %d\n", keycode);
	if (keycode == KEY_ESC)
	{
		write(1, "\033[0;36mYou Enter the ESC Key. Good Bye! :)\033[0m\n", 47);
		exit (EXIT_SUCCESS);
	}
	if (keycode == KEY_W || keycode == KEY_UP)
		player_location(map, map->x - 1, map->y);
	else if (keycode == KEY_S || keycode == KEY_DOWN)
		player_location(map, map->x + 1, map->y);
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
		player_location(map, map->x, map->y + 1);
	else if (keycode == KEY_A || keycode == KEY_LEFT)
		player_location(map, map->x, map->y - 1);
	return (0);
}
