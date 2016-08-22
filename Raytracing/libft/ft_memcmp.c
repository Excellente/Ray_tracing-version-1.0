/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 10:52:02 by emsimang          #+#    #+#             */
/*   Updated: 2016/06/14 15:53:17 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	char1;
	unsigned char	char2;

	while (n-- > 0)
	{
		str1++;
		str2++;
		char1 = *(unsigned char *)str1;
		char2 = *(unsigned char *)str2;
		if (char1 != char2)
			return (char1 - char2);
	}
	return (0);
}
