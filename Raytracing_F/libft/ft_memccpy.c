/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 13:32:32 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/14 14:05:21 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	char *ptr;
	char *s_ptr;

	ptr = (char *)dst;
	s_ptr = (char *)src;
	while (n || (*s_ptr != c))
	{
		if (*s_ptr == c)
		{
			*ptr = *s_ptr;
			ptr++;
			dst = ptr;
			return (dst);
		}
		*ptr = *s_ptr;
		ptr++;
		s_ptr++;
		n--;
	}
	return (dst);
}
