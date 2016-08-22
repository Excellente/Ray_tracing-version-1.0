/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:05:46 by emsimang          #+#    #+#             */
/*   Updated: 2016/06/14 15:51:30 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	index;
	size_t	dest_len;

	i = 0;
	index = 0;
	dest_len = ft_strlen(s1);
	while (index < (dest_len + n + 1))
	{
		if (index >= dest_len)
		{
			s1[index] = s2[i];
			i++;
			index++;
		}
		else
		{
			index++;
		}
	}
	s1[index] = '\0';
	return (s1);
}
