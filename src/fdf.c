/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffahey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 14:33:34 by ffahey            #+#    #+#             */
/*   Updated: 2019/03/03 16:54:51 by ffahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "/usr/local/include/mlx.h"

void	mlx_put_line(void *mlx_ptr, void *win_ptr, t_line line)
{
    int		len;
    int		x;
    int		y;
    int		d;

	len = MAX(line.len_x, line.len_y) + 1;
	x = line.p0.x;
	y = line.p0.y;
	d = (line.len_y <= line.len_x) ? -line.len_x : -line.len_y;
	while (len--)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0x0000ff00);
		if (line.len_y <= line.len_x)
		{
			x += line.dx;
			d += 2 * line.len_y;
			if (d > 0)
			{
				d -= 2 * line.len_x;
				y += line.dy;
			}
		}
		else
		{
			y += line.dy;
			d += 2 * line.len_x;
			if (d > 0)
			{
				d -= 2 * line.len_y;
				x += line.dx;
			}
		}
	}
}

int main()
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_line	line;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "new_window");
	line = ft_create_line(ft_create_point(400, 200, 0),
						ft_create_point(100, 150, 0));
	mlx_put_line(mlx_ptr, win_ptr, line);
	mlx_loop(mlx_ptr);

	return (0);
}
