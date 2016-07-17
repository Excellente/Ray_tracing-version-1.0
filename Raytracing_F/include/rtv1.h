/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 12:08:01 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/17 17:21:01 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include <stdio.h>
# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef	struct	s_vector
{
	float	x;
	float	y;
	float	z;
}				t_vector;

typedef	struct	s_ray
{
	t_vector	start;
	t_vector	direction;
}				t_ray;

typedef	struct	s_sphere
{
	float		radius;
	t_vector	center;
}				t_sphere;

typedef	struct	s_color
{
	float	red;
	float	green;
	float	blue;
}				t_color;

typedef	struct	s_light
{
	t_color		intensity;
	t_vector	pos;
}				t_light;

typedef	struct	s_pixel
{
	int	x;
	int	y;
}				t_pixel;

typedef	struct	s_mlx
{
	void	*m_ptr;
	void	*w_ptr;
}				t_mlx;

typedef	struct	s_control
{
	int		hit;
	float	t;
}				t_control;

typedef	struct	s_coeff
{
	float	a;
	float	b;
	float	c;
}				t_coeff;

typedef	struct	s_glob
{
	t_ray		r;
	t_mlx		m;
	t_light		l;
	t_pixel		pxl;
	t_sphere	s;
	t_control	ctrl;
}				t_glob;

int				ft_ray_sphere_intersect(t_ray *r, t_sphere *s, t_control *t);
void			ft_light_init(t_light *l);
void			ft_sphere_init(t_sphere *s);
void			ft_ray_init(t_ray *r, int x, int y, int z);
float			ft_vector_dot(t_vector *v1, t_vector *v2);
t_vector		ft_vector_add(t_vector *v1, t_vector *v2);
t_vector		ft_scale_vector(float t, t_vector *v);
t_vector		ft_vector_sub(t_vector *v1, t_vector *v2);

#endif
