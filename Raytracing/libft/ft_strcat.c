/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:49:43 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:47:10 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	size_t	index;
	size_t	res_str_len;

	i = 0;
	index = 0;
	res_str_len = ft_strlen(dest) + ft_strlen(src);
	while (index < res_str_len)
	{
		if (index >= ft_strlen(dest))
		{
			dest[index] = src[i];
			i++;
			index++;
		}
		else
		{
			index++;
		}
	}
	dest[index] = '\0';
	return (dest);
}
