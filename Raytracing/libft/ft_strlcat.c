/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:36:44 by emsimang          #+#    #+#             */
/*   Updated: 2016/06/14 15:49:15 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tdest;
	const char	*tsrc;
	size_t		indx;
	size_t		tdestlen;

	tsrc = src;
	tdest = dst;
	indx = size;
	while (indx-- > 0 && !(*tdest == '\0'))
		tdest++;
	tdestlen = tdest - dst;
	indx = size - tdestlen;
	if (indx == 0)
		return (tdestlen - ft_strlen(src));
	while (!(tsrc == '\0'))
	{
		if (!(indx == 0))
		{
			*tdest++ = *tsrc;
			--indx;
		}
		tsrc++;
	}
	*tdest = '\0';
	return (tdestlen + (tsrc - src));
}
