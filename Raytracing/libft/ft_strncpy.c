/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:32:45 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 15:14:49 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	index;
	size_t	src_len;

	index = 0;
	src_len = ft_strlen(src);
	while (index < len)
	{
		if (index > src_len)
		{
			dest[index] = '\0';
		}
		else
		{
			dest[index] = src[index];
		}
		index++;
	}
	return (dest);
}
