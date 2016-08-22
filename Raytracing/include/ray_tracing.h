/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_tracing.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:53:12 by emsimang          #+#    #+#             */
/*   Updated: 2016/08/22 14:15:47 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_TRACING_H
# define RAY_TRACING_H

# include <mlx.h>
# include <math.h>
# include <stdio.h>
# define WIDTH 900
# define HEIGHT 800
# define MAX 255.0f
# define RED (t_uc)ft_min(phong->diff.r * MAX, MAX)
# define GREEN (t_uc)ft_min(phong->diff.g * MAX, MAX)
# define BLUE (t_uc)ft_min(phong->diff.b * MAX, MAX)


//# define COLOR ft_calc_color(phong->c_t, &scene->sh.s.color, &scene->l.in)

typedef	unsigned	char	t_uc;
typedef	struct	s_mlx
{
	void	*w;
	void	*m_p;
}				t_mlx;
typedef	struct	s_vector
{
	float	x;
	float	y;
	float	z;
}				t_vector;

typedef	struct	s_color
{
	float	r;
	float	g;
	float	b;
}				t_color;

typedef	struct	s_ray
{
	t_vector	dir;
	t_vector	start;
}				t_ray;

typedef	struct	s_plane
{
	t_color		color;
	t_vector	p0;
	t_vector	normal;
}				t_plane;

typedef	struct	s_sphere
{
	float		radius;
	t_color		color;
	t_vector	center;

}				t_sphere;

typedef	struct	s_shape
{
	t_plane		p;
	t_sphere	s;
}				t_shape;

typedef	struct	s_light
{
	t_color		in;
	t_vector	pos;
}				t_light;

typedef	struct	s_pixel
{
	int	x;
	int	y;
}				t_pixel;

typedef	struct	s_ctrl
{
	int			hit;
	float		t;
	t_vector	p_hit;
}				t_ctrl;

typedef	struct	s_phong
{
	int			fc;
	float		c_t;
	t_color		diff;
	t_color		spec;
	t_vector	n_vec;
	t_vector	l_vec;
	t_vector	n_vec_n;
	t_vector	l_vec_n;
}				t_phong;

typedef	struct	s_scene
{
	t_pixel	p;
	t_ray	r;
	t_shape	sh;
	t_light	l;
}				t_scene;

typedef	struct	s_dterms
{
	float	a;
	float	b;
	float	c;
}				t_dterms;

int				ft_ray_plane_intersect(t_scene *s, float *t);
int				ft_ray_sphere_intersect(t_scene *s, float *t);
float			ft_min(float x, float y);
float			ft_dotvector(t_vector *v1, t_vector *v2);
float			ft_length(t_vector *v);
t_color			ft_calc_color(t_phong *s, t_color *c, t_color *l);
t_vector		ft_addvector(t_vector *v1, t_vector *v2);
t_vector		ft_normalize_vector(t_vector *v);
t_vector		ft_normal(t_vector *v1, t_vector *v2);
t_vector		ft_subvector(t_vector *v1, t_vector *v2);
t_vector		ft_intersection_point(float t, t_ray *r);

#endif
