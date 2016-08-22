/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:38:27 by emsimang          #+#    #+#             */
/*   Updated: 2016/08/22 14:11:20 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ray_tracing.h"

t_color		ft_calc_color(t_phong *phong, t_color *color, t_color *l)
{
	t_color	res;

	res.r = 1.0f * l->r * phong->c_t * color->r;
	res.g = 0.4f * l->g * phong->c_t * color->g;
	res.b = 0.0f * l->b * phong->c_t * color->b;
	return (res);
}
