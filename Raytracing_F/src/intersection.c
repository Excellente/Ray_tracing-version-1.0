/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:54:48 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/17 17:15:59 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

float	ft_calc_discriminent(t_ray *r, t_sphere *s, float *t00)
{
	float		discr;
	float		t0;
	float		t1;
	t_coeff		f;
	t_vector	dist;

	dist = ft_vector_sub(&r->start, &s->center);
	f.a = ft_vector_dot(&r->direction, &r->direction);
	f.b = 2 * ft_vector_dot(&r->direction, &dist);
	f.c = ft_vector_dot(&dist, &dist) - (s->radius * s->radius);
	discr = (f.b * f.b) - 4 * (f.a * f.c);
	t0 = -f.b + (sqrtf(discr) / 2);
	t1 = -f.b - (sqrtf(discr) / 2);
	if (t0 > t1)
		t0 = t1;
	*t00 = t0;
	return (discr);
}

int		ft_ray_sphere_intersect(t_ray *r, t_sphere *s, t_control *ctrl)
{
	int			res;
	float		t00;
	float		discr;

	t00 = 0.0f;
	discr = ft_calc_discriminent(r, s, &t00);
	if (discr < 0)
		res = 0;
	else
	{
		if ((t00 > 0.001f) && (t00 < ctrl->t))
		{
			ctrl->t = t00;
			res = 1;
		}
		else
			res = 0;
	}
	return (res);
}
