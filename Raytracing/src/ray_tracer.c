/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_tracer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:45:01 by emsimang          #+#    #+#             */
/*   Updated: 2016/08/22 16:50:40 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ray_tracing.h"

void	ft_scene_init(t_scene *scene)
{
	scene->p.y = 0;
	scene->l.pos = (t_vector){100, 420, 150};
	scene->l.in = (t_color){1.0f, 1.0f, 1.0f};
	scene->r.dir = (t_vector){0.0f, 0, 1};
	scene->r.start = (t_vector){0.0f, 0.0f, 10.0f};
	//sphere
	scene->sh.s.radius = 200;
	scene->sh.s.color = (t_color){0.6f, 0.4f, 0.0f};
	scene->sh.s.center = (t_vector){450.0f, 400, 0.0f};
	//plane
	scene->sh.p.color = (t_color){0.4f, 0.6f, 0.0f};
	scene->sh.p.p0 = (t_vector){650.0f, 600.0f, -50.f};
	scene->sh.p.normal = (t_vector){1.0f, 0.0f, 1.0f};
}

void	ft_phong(t_phong *phong, t_ctrl *ctrl, t_scene *scene)
{
	phong->diff = (t_color){1.0f, 0.4f, 0};
	phong->n_vec = ft_subvector(&ctrl->p_hit, &scene->sh.s.center);
	phong->l_vec = ft_subvector(&ctrl->p_hit, &scene->l.pos);
	phong->n_vec_n = ft_normalize_vector(&phong->n_vec);
	phong->l_vec_n = ft_normalize_vector(&phong->l_vec);
	phong->c_t = ft_dotvector(&phong->n_vec_n, &phong->l_vec_n);
	if (phong->c_t < 0)
		phong->c_t = 0;
	phong->diff = ft_calc_color(phong, &scene->sh.s.color, &scene->l.in);
	phong->fc = (RED << 16) + (GREEN << 8) + BLUE;
}

void	ft_phong_plane(t_phong *phong, t_ctrl *ctrl, t_scene *scene)
{
	phong->diff = (t_color){1.0f, 0.4f, 0};
	phong->n_vec = scene->sh.p.normal;
	phong->l_vec = ft_subvector(&ctrl->p_hit, &scene->l.pos);
	phong->n_vec_n = ft_normalize_vector(&phong->n_vec);
	phong->l_vec_n = ft_normalize_vector(&phong->l_vec);
	phong->c_t = ft_dotvector(&phong->n_vec_n, &phong->l_vec_n);
	if (phong->c_t < 0)
		phong->c_t = 0;
	phong->diff = ft_calc_color(phong, &scene->sh.p.color, &scene->l.in);
	phong->fc = (RED << 16) + (GREEN << 8) + BLUE;
}

void	ft_render_sphere(t_scene *scene, t_phong *phong, t_ctrl *ctrl, t_mlx *m)
{
	while (scene->p.y < HEIGHT)
	{
		scene->p.x = 0;
		scene->r.start.y = scene->p.y;
		while (scene->p.x < WIDTH)
		{
			ctrl->t = 40000;
			scene->r.start.x = scene->p.x;
			ctrl->hit = ft_ray_sphere_intersect(scene, &ctrl->t);
			if (ctrl->hit == 1)
			{
				ctrl->p_hit = ft_intersection_point(ctrl->t, &scene->r);
				ft_phong(phong, ctrl, scene);
				mlx_pixel_put(m->m_p, m->w, scene->p.x, scene->p.y, phong->fc);
			}
			else
				mlx_pixel_put(m->m_p, m->w, scene->p.x, scene->p.y, 0x505050);
			scene->p.x++;
		}
		scene->p.y++;
	}
}

void	ft_render_plane(t_scene *scene, t_phong *phong, t_ctrl *ctrl, t_mlx *m)
{
	while (scene->p.y < HEIGHT)
	{
		scene->p.x = 0;
		scene->r.start.y = scene->p.y;
		while (scene->p.x < WIDTH)
		{
			ctrl->t = 40000;
			scene->r.start.x = scene->p.x;
			ctrl->hit = ft_ray_plane_intersect(scene, &ctrl->t);
			if (ctrl->hit == 1)
			{
				printf("plane rendering\n");
				ctrl->p_hit = ft_intersection_point(ctrl->t, &scene->r);
				ft_phong(phong, ctrl, scene);
				mlx_pixel_put(m->m_p, m->w, scene->p.x, scene->p.y, phong->fc);
			}
			else
				mlx_pixel_put(m->m_p, m->w, scene->p.x, scene->p.y, 0x505050);
			scene->p.x++;
		}
		scene->p.y++;
	}
}

int		main(void)
{
	int			f_col;
	t_mlx		m;
	t_ctrl		ctrl;
	t_phong		phong;
	t_scene		scene;

	m.m_p = mlx_init();
	m.w = mlx_new_window(m.m_p, WIDTH, HEIGHT, "Ray Tracer");
	ft_scene_init(&scene);
	ft_render_sphere(&scene, &phong, &ctrl, &m);
	//ft_scene_init(&scene);
	//ft_render_plane(&scene, &phong, &ctrl, &m);
	mlx_loop(m.m_p);
	return (0);
}
