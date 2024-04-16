/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:57:15 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/16 12:55:52 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	size_t		i;

	if (!to && !from)
		return (0);
	i = 0;
	if (to < from)
	{
		i = n - 1;
		while (i > 0)
		{
			((unsigned char *)to)[i] = ((unsigned char *)from)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)to)[i] = ((unsigned char *)from)[i];
			i++;
		}
	}
	return (to);
}
