/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:45:13 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/25 18:50:29 by cda-fons         ###   ########.fr       */
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
		if (str[i] != c && flag == 1 && str[i])
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
	list = (char **)malloc(sizeof(char *) * i_words(str, c) + 1);
	if (str == 0 || c == 0 || !list)
		return (NULL);
	while (i < i_words(str, c))
	{
		while (str[x] == c)
			x++;
		y = x;
		while (str[y] != c && str[y])
			y++;
		list[i] = (char *)malloc(sizeof(char) * (y - x) + 1);
		list[i] = ft_substr(str, x, (y - x));
		x = y;
		i++;
	}
	list[i] = '\0';
	return (list);
}
/* #include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "split  ||this|for|me|||||!|";
	char **result = ft_split(str, '|');
	int	i = 0;
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
	if (result[5000] != NULL)
		printf("null\n");
} */
