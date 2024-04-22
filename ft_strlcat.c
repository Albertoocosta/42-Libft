/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:41:28 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/22 20:09:23 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *src, char *dst, size_t lendest)
{
	size_t	h;
	size_t	i;
	size_t	start;

	h = ft_strlen(dst);
	if (lendest <= h)
		return (lendest + ft_strlen(src));
	if (lendest == 0)
		return (ft_strlen(src));
	i = 0;
	start = ft_strlen(dst);
	while (src[i] && h < lendest - 1)
	{
		dst[h] = src[i];
		h++;
		i++;
	}
	dst[h] = '\0';
	return (start + ft_strlen(src));
}
