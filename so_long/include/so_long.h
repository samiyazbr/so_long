/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:01:02 by szubair           #+#    #+#             */
/*   Updated: 2022/08/07 19:09:37 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/inc/libft.h"
# include "../mlx/mlx.h"

# include <fcntl.h> // open
# include <stdio.h> // perror

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
}	t_mlx;

typedef struct s_img
{
	void	*player;
	void	*collect;
	void	*road;
	void	*wall;
	void	*exit;
}	t_img;

typedef struct s_map {
	struct s_mlx	mlx;
	struct s_img	img;
	char			**map;
	int				width;
	int				height;
	int				x;
	int				y;
	int				step;
}	t_map;

typedef struct s_check
{
	int	player;
	int	exit;
	int	collect;
}	t_check;

# define X_EVENT_KEY_PRESS 2
# define X_EVENT_DESTROY_NOTIFY 17
# define X_NO_EVENT_MASK 0
# define KEY_ESC 53
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_W 13
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_DOWN 125
# define KEY_UP 126

void	so_long(char *filename);
void	parsing_map(t_map *map, char *filename);
char	*get_next_line(int fd);
void	valid_map(t_map *map);
void	paint_map(t_mlx *mlx, t_map *map, t_img *img);
int		key_press(int keycode, t_map *map);

#endif
