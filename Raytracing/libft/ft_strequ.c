/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 11:55:43 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 15:52:30 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int indx;

	indx = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	else
	{
		while (s1[indx] != '\0')
		{
			if (s1[indx] != s2[indx])
			{
				return (0);
			}
		}
	}
	return (1);
}
