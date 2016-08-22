/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:57:34 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 16:47:18 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *substr, size_t n)
{
	char *start;
	char *end;

	while (*str)
	{
		start = str;
		end = substr;
		while (*str == *end && n--)
		{
			str++;
			end++;
		}
		if (*end == '\0')
			return (start);
		str = start + 1;
	}
	return (0);
}
