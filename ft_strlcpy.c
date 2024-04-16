/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:32:26 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/16 13:05:22 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *src, char *dst, size_t lendst)
{
	size_t	lensrc;
	size_t	i;

	if (dst == 0 || src == 0)
		return (0);
	lensrc = ft_strlen(src);
	i = 0;
	if (lendst != 0)
	{
		while (src[i] != 0 && i < (lendst - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}
