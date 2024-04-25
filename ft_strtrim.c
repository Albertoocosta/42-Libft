/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:42:42 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/25 18:29:04 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	if (!s1 || !set || s1[0] == '\0')
		return (0);
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
