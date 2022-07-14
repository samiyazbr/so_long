#include <mlx.h>

typedef struct s_data
{
	void *img;
	char *addr;
	int bits_per_pixel;
	int line_length;
	int endian;
}				t_data;

void my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char *dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int main(void)
{
	void *mlx;
	t_data img;
	void *mlx_win;
	int i;
	int j;

	i = 0;
	j = 0;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1100, 659, "so_long");
	img.img = mlx_new_image(mlx, 1100, 659);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	while(i++<1099)
	{
		j=0;
		while(j++<658)
		{
			my_mlx_pixel_put(&img, i,j, 0x00F2B8C6);
		}
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}