/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 12:42:51 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/12 12:45:08 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nbr, int power)
{
	int i;
	int result;

	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nbr;
		i++;
	}
	return (result);
}
