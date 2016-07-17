/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 13:17:32 by emsimang          #+#    #+#             */
/*   Updated: 2016/06/17 13:19:35 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_next_line(const int fd, char **line)
{
	char	*buffer;
	char	*tmp;
	int		nbytes;
	int		i;

	nbytes = 1;
	i = 0;
	buffer = (char*)malloc(BUFF_SIZE);
	if (fd < 0 || *line == NULL || buffer == NULL)
		return (-1);
	else
	{
		while (buffer[i - 1] != '\n' && nbytes > 0 && i <= BUFF_SIZE)
		{
			nbytes = read(fd, &buffer[i], 1);
			i++;
		}
		buffer[i - 1] = '\0';
		tmp = (char*)malloc(sizeof(char) * i);
		ft_strcpy(tmp, buffer);
		free(buffer);
		buffer = tmp;
	}
	*line = buffer;
	return (nbytes);
}
