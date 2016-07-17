/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 13:12:26 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:49:02 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *str)
{
	size_t	i;
	size_t	k;
	char	*tmp;

	i = 0;
	k = ft_strlen(str) - 1;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(str));
	while (i < ft_strlen(str))
	{
		tmp[i] = str[k];
		k--;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
