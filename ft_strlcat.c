/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:41:28 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/12 15:43:18 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *src, char *dst, size_t lendest)
{
	size_t	h;
	size_t	i;

	h = ft_strlen(dest);
	if (lendest <= ft_strlen(dst))
		return (lendest + ft_strlen(src));
	i = 0;
	while (src[i] != 0 && (i + 1) < lendest)
	{
		dst[h] = src[i];
		h++;
		i++;
	}
	dst[h] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
