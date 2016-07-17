/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 14:26:21 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/14 14:42:58 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;
	void *nul;

	ptr = (char *)s;
	nul = NULL;
	while (n)
	{
		if (*ptr == c)
		{
			nul = ptr;
			return (nul);
		}
		ptr++;
		n--;
	}
	return (nul);
}
