/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:22:10 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/19 18:55:16 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (*str < 33)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 43)
			str++;
		if (*str == 45)
		{
			i *= -1;
			str++;
		}
	}
	while ((*str >= 48) && (*str <= 57))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (i * result);
}
