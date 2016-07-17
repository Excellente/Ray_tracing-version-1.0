/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:23:03 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:46:14 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *p, size_t i, size_t j)
{
	void	*ptr;

	ptr = (void *)malloc(i + j);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memcpy(ptr, p, j);
	free(p);
	return (ptr);
}
