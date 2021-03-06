/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 10:44:31 by emsimang          #+#    #+#             */
/*   Updated: 2016/05/15 15:47:35 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int		index;
	char	*ptr;

	index = 0;
	ptr = s;
	while (s[index] != '\0')
	{
		f(ptr);
		ptr++;
		index++;
	}
}
