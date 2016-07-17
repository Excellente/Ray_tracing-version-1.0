/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 13:04:39 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/17 17:37:45 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

void	ft_initialize_window(t_mlx *m)
{
	m->m_ptr = mlx_init();
	m->w_ptr = mlx_new_window(m->m_ptr, 1020, 900, "RTv1");
}

int		main(void)
{
	t_glob g;

	g.pxl.y = 0;
	ft_sphere_init(&g.s);
	ft_ray_init(&g.r, 0, 0, 1);
	ft_initialize_window(&g.m);
	while (g.pxl.y <= 900)
	{
		g.r.start.y = g.pxl.y;
		g.pxl.x = 0;
		while (g.pxl.x < 1020)
		{
			g.r.start.x = g.pxl.x;
			g.ctrl.t = 20000;
			g.ctrl.hit = ft_ray_sphere_intersect(&g.r, &g.s, &g.ctrl);
			if (g.ctrl.hit == 1)
				mlx_pixel_put(g.m.m_ptr, g.m.w_ptr, g.pxl.x, g.pxl.y, 0xff0000);
			else
				mlx_pixel_put(g.m.m_ptr, g.m.w_ptr, g.pxl.x, g.pxl.y, 0x1a0000);
			g.pxl.x++;
		}
		g.pxl.y++;
	}
	mlx_loop(g.m.m_ptr);
	return (0);
}
