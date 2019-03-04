/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffahey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 14:34:21 by ffahey            #+#    #+#             */
/*   Updated: 2019/03/03 14:35:03 by ffahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define ABS(a) (a >=0) ? a : -a
# define MIN(a, b) a < b ? a : b
# define MAX(a, b) a > b ? a : b
# include "mlx.h"
# include "libft.h"
# include <math.h>
# include <stdio.h>

# define C(a) printf("check%d\n", a);

typedef struct  s_point
{
    int     x;
    int     y;
    int     z;
}               t_point;

typedef struct  s_line
{
    t_point p0;
    t_point p1;
    int     len_x;
    int     len_y;
    int     dx;
    int     dy;
}               t_line;

t_point         ft_create_point(int x, int y, int z);
t_line          ft_create_line(t_point p1, t_point p2);

#endif
