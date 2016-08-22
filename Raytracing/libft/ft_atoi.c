/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:23:21 by emsimang          #+#    #+#             */
/*   Updated: 2016/06/11 16:08:40 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int num;
	int neg;
	int indx;

	num = 0;
	neg = 0;
	indx = 0;
	while (str[indx] >= 7 && str[indx] <= 13)
		indx++;
	if (str[indx] == 45)
		neg = 1;
	if (str[indx] == 45 || str[indx] == 43)
		indx++;
	while (str[indx] >= 48 && str[indx] <= 57)
	{
		num *= 10;
		num += ((int)str[indx] - 48);
		indx++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}
