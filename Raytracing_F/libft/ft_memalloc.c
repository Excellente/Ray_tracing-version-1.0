/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 10:35:37 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/10 15:12:55 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	index;
	size_t	*ip;
	void	*ptr;

	index = 0;
	ptr = malloc(size);
	ip = (size_t *)ptr;
	while (index < size)
	{
		*ip = 0;
		ip++;
		index++;
	}
	return (ptr);
}
