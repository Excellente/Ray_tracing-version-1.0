/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:05:12 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/14 12:40:15 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	char *data;

	data = ptr;
	while (num)
	{
		*data = value;
		data++;
		num--;
	}
	return (ptr);
}
