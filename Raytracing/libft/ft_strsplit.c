/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 15:14:50 by emsimang          #+#    #+#             */
/*   Updated: 2016/07/17 17:45:07 by emsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_max_len(char *str, char c)
{
	int	end;
	int	start;
	int	index;
	int	max_len;

	end = 0;
	start = 0;
	index = 0;
	max_len = 0;
	while (str[index] != '\0')
	{
		while (str[index] == c && str[index] != '\0')
			index++;
		start = index;
		while (str[index] != c && str[index] != '\0')
			index++;
		end = index;
		if ((end - start) > max_len)
			max_len = end - start;
	}
	return (max_len);
}

int		get_word_count(char *str, char c)
{
	int	index;
	int	word_count;

	index = 0;
	word_count = 0;
	while (str[index] != '\0')
	{
		while (str[index] == c && str[index] != '\0')
			index++;
		if (ft_isalpha(str[index]))
			word_count++;
		while (str[index] != c && str[index] != '\0')
			index++;
	}
	return (word_count);
}

char	**ft_strsplit(char *str, int c)
{
	int		i;
	int		j;
	int		index;
	char	*word;
	char	**str_arr;

	i = 0;
	index = 0;
	str_arr = (char **)malloc(sizeof(*str_arr) * (get_word_count(str, c) + 1));
	while (str[index] != '\0')
	{
		j = 0;
		while (str[index] == c && str[index] != '\0')
			index++;
		word = (char *)malloc(sizeof(*word) * (get_max_len(str, c) + 1));
		while (str[index] != c && str[index] != '\0')
			word[j++] = str[index++];
		word[j] = '\0';
		str_arr[i++] = word;
	}
	str_arr[i] = 0;
	return (str_arr);
}
