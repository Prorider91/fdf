/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graphics.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffahey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:39:35 by ffahey            #+#    #+#             */
/*   Updated: 2019/03/04 14:58:17 by ffahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_graphics(int **mtx)
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_line	line;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "fdF");

	line = ft_create_line(ft_create_point(400, 200, 0),
						ft_create_point(100, 150, 0));
	ft_put_line(mlx_ptr, win_ptr, line, 0x0000ff00);

	mlx_loop(mlx_ptr);
}
