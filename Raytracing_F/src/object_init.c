/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 12:45:49 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/17 16:42:00 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

void	ft_light_init(t_light *l)
{
	l->pos.x = 3200;
	l->pos.y = 3000;
	l->pos.z = -100;
	l->intensity.red = 1;
	l->intensity.green = 0.4;
	l->intensity.blue = 0.6;
}

void	ft_sphere_init(t_sphere *s)
{
	s->center.x = 500;
	s->center.y = 440;
	s->center.z = 100;
	s->radius = 200;
}

void	ft_ray_init(t_ray *r, int x, int y, int z)
{
	r->direction.x = x;
	r->direction.y = y;
	r->direction.z = z;
	r->start.z = -1000;
}
