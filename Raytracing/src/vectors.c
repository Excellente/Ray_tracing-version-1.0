/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dreamworks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:52:05 by emsimang          #+#    #+#             */
/*   Updated: 2016/08/19 09:49:32 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ray_tracing.h"

float		ft_dotvector(t_vector *v1, t_vector *v2)
{
	float	res;

	res = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
	return (res);
}

t_vector	ft_normalize_vector(t_vector *v)
{
	float		tmp;
	t_vector	res;

	tmp = sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
	res.x = v->x / tmp;
	res.y = v->y / tmp;
	res.z = v->z / tmp;
	return (res);
}

t_vector	ft_subvector(t_vector *v1, t_vector *v2)
{
	t_vector	res;

	res.x = v1->x - v2->x;
	res.y = v1->y - v2->y;
	res.z = v1->z - v2->z;
	return (res);
}

t_vector    ft_addvector(t_vector *v1, t_vector *v2)
{
	t_vector    res;
	
	res.x = v1->x + v2->x;
	res.y = v1->y + v2->y;
	res.z = v1->z + v2->z;
	return (res);
}
