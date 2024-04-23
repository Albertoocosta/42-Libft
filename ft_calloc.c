/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:34:53 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/23 19:46:04 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	if (size == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < nmemb)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
