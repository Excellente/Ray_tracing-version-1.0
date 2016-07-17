/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 12:54:40 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:48:04 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	int		i;
	int		k;
	int		result;

	result = (ft_strlen((char*)s1) + ft_strlen((char*)s2));
	tmp = (char*)malloc(sizeof(char) * result);
	ft_strcpy(tmp, s1);
	i = 0;
	k = ft_strlen((char*)s1);
	while (s2[i])
	{
		tmp[k] = s2[i];
		k++;
		i++;
	}
	tmp[k] = '\0';
	return (tmp);
}
