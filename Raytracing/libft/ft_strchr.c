/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:55:53 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 15:46:40 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	*ptr;
	char	ch;

	index = 0;
	ptr = 0;
	while ((str[index] != c) && (str[index] != '\0'))
	{
		index++;
	}
	if (c == '\0' || str[index] == c)
	{
		ch = str[index];
		ptr = &ch;
	}
	return (ptr);
}
