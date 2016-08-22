/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:16:19 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 15:53:16 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*ptr;
	int		index;

	ptr = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
		{
			ch = str[index];
			ptr = &ch;
		}
		index++;
	}
	return (ptr);
}
