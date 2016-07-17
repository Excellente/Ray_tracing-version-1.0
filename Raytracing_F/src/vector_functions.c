/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_funtions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 12:15:08 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/17 17:17:17 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

float		ft_vector_dot(t_vector *v1, t_vector *v2)
{
	float	res;

	res = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
	return (res);
}

t_vector	ft_vector_add(t_vector *v1, t_vector *v2)
{
	t_vector res;

	res.x = v1->x + v2->x;
	res.y = v1->y + v2->y;
	res.z = v1->z + v2->z;
	return (res);
}

t_vector	ft_scale_vector(float scalor, t_vector *v)
{
	t_vector res;

	res.x = v->x * scalor;
	res.y = v->y * scalor;
	res.z = v->z * scalor;
	return (res);
}

t_vector	ft_vector_sub(t_vector *v1, t_vector *v2)
{
	t_vector	res_vector;

	res_vector.x = v1->x - v2->x;
	res_vector.y = v1->y - v2->y;
	res_vector.z = v1->z - v2->z;
	return (res_vector);
}
