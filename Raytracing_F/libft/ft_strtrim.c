/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 13:04:27 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:43:34 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltrim(const char *str)
{
	char	*tmp;
	int		start;
	int		end;
	int		i;
	int		k;

	start = 0;
	while (ft_iswhitespace(str[start]))
		start++;
	end = ft_strlen((char*)str);
	tmp = (char*)malloc(sizeof(char) * (end - start));
	i = 0;
	k = start;
	while (start < end)
	{
		tmp[i] = str[k];
		i++;
		k++;
	}
	return (tmp);
}

char	*ft_rtrim(const char *str)
{
	char	*tmp;
	int		i;
	int		end;

	end = ft_strlen((char*)str);
	while (ft_iswhitespace(str[end]))
		end--;
	end++;
	tmp = (char*)malloc(sizeof(char) * (end));
	i = 0;
	while (i < end)
	{
		tmp[i] = str[i];
		i++;
	}
	return (tmp);
}

char	*ft_strtrim(const char *str)
{
	char	*tmp;

	tmp = ft_ltrim(str);
	tmp = ft_ltrim(tmp);
	return (tmp);
}
