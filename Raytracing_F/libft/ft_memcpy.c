/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 13:15:03 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/14 14:22:30 by emsimang         ###   ########.fr       */
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
		if (*ptr == *s_ptr)
		{
			ptr++;
			s_ptr++;
			n--;
		}
		else
		{
			*ptr = *s_ptr;
			ptr++;
			s_ptr++;
			n--;
		}
	}
	return (dst);
}
