/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 11:00:53 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 16:48:00 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *substr)
{
	char	*start;
	char	*end;

	while (*str)
	{
		start = str;
		end = substr;
		while (*str == *end)
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
