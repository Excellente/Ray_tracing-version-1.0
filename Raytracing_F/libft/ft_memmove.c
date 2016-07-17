/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 14:22:46 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/14 14:39:26 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char *ptr;
	char *s_ptr;

	ptr = (char *)dst;
	s_ptr = (char *)src;
	while (n)
	{
		*ptr = *s_ptr;
		ptr++;
		s_ptr++;
		n--;
	}
	return (dst);
}
