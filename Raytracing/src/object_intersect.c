/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zulukingdom_intersect.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:18:20 by emsimang          #+#    #+#             */
/*   Updated: 2016/08/22 14:25:29 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ray_tracing.h"

float	ft_calc_discriminant(t_ray *r, t_sphere *s, float *t00)
{
	float		t0;
	float		t1;
	float		discr;
	t_vector	dist;
	t_dterms	d;

	dist = ft_subvector(&r->start, &s->center);
	d.a = ft_dotvector(&r->dir, &r->dir);
	d.b = 2.0f * ft_dotvector(&r->dir, &dist);
	d.c = ft_dotvector(&dist, &dist) - (s->radius * s->radius);
	discr = sqrtf(d.b) - 4.0f * (d.a * d.c);
	t0 = (-d.b + sqrtf(discr)) / 2.0f;
	t1 = (-d.b - sqrtf(discr)) / 2.0f;
	if (t0 > t1)
		t0 = t1;
	*t00 = t0;
	return (discr);
}

int		ft_ray_sphere_intersect(t_scene *scene, float *t)
{
	int			retval;
	float		t00;
	float		discr;

	t00 = 0.0f;
	discr = ft_calc_discriminant(&scene->r, &scene->sh.s, &t00);
	if (discr < 0)
		retval = 0;
	else
	{
		if ((-t00 > 0.001f) && (t00 < *t))
		{
			*t = t00;
			retval = 1;
		}
		else
			retval = 0;
	}
	return (retval);
}

int		ft_ray_plane_intersect(t_scene *scene, float *t)
{
	float		denom;
	t_vector	p0l0;

	denom = ft_dotvector(&scene->r.dir, &scene->sh.p.normal);
	if (denom > 1e-6)
	{
		p0l0 = ft_subvector(&scene->sh.p.p0, &scene->r.start);
		*t =  ft_dotvector(&p0l0, &scene->sh.p.normal) / denom;
		return (*t >= 0);
	}
	return (0);
}
