/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:22:10 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/23 17:56:07 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (*str < 33)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			i *= -1;
		str++;
	}
	while ((*str >= 48) && (*str <= 57))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (i * result);
}
