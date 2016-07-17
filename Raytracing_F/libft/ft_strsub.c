/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 13:02:55 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:49:38 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	int		k;
	char	*tmp;

	tmp = (char*)malloc(sizeof(char) * (len));
	i = start;
	k = 0;
	while (i < (start + len))
	{
		tmp[k] = s[i];
		i++;
		k++;
	}
	return (tmp);
}
