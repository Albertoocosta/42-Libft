/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:45:13 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/18 20:08:03 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	i_words(char *str, char c)
{
	int	i;
	int	words;
	int	flag;

	i = 0;
	words = 0;
	flag = 1;
	if (!str)
		return (words);
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
			flag = 1;
		}
		if (str[i] != c && flag)
		{
			words++;
			flag = 0;
		}
		i++;
	}
	return (words);
}

char	**ft_split(char	*str, char c)
{
	size_t	x;
	size_t	y;
	size_t	i;
	char	**list;

	x = 0;
	y = 0;
	i = 0;
	list = (char **)malloc(sizeof(char *) * (i_words(str, c) + 1));
	if (str == 0 || c == 0 || !list)
		return (0);
	while (i < i_words(str, c))
	{
		while (str[x] == c)
			x++;
		y = x;
		while (str[y] != c && str[y])
			y++;
		list[i] = ft_substr(str, x, (y - x));
		x = y;
		i++;
	}
	list[i] = 0;
	return (list);
}
