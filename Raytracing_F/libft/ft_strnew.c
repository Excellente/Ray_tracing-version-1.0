/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 09:10:27 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/14 09:21:27 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	size_t	index;
	char	*str;

	index = 0;
	str = (char *)malloc(sizeof(str) * (size + 1));
	while (index < size + 1)
	{
		str[index] = '\0';
		index++;
	}
	return (str);
}
