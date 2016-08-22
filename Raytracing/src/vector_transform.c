/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_transform.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:10:38 by emsimang          #+#    #+#             */
/*   Updated: 2016/08/19 10:10:41 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ray_tracing.h"

float		ft_length(t_vector *v)
{
	float	res;

	res = sqrtf(powf(v->x, 2) + powf(v->y, 2) + powf(v->z, 2));
	return (res);
}

t_vector	ft_scale_vector(float s, t_vector *v)
{
	t_vector	res;

	res.x = v->x * s;
	res.y = v->y * s;
	res.z = v->z * s;
	return (res);

}

t_vector	ft_intersection_point(float t, t_ray *r)
{
	t_vector	res;
	t_vector	tmp;

	tmp = ft_scale_vector(t, &r->dir);
	res = ft_addvector(&r->start, &tmp);
	return (res);
}
