/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:52:44 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/24 19:31:02 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

static int check_signal(char c)
{
	return (c == '-' || c == '+');
}

int ft_atoi(const char *nptr)
{
	int result;
	int i;
	int sign;
	// verifica o espaço
	
	i = 0;
	while (space(nptr[i]))
		i++;

	// verificar sinal
    sign = 1;
	if (check_signal(nptr[i]))
	{
		if (nptr[i++] == '-' && sign == 1)
			sign = (-1);
	}
	result = (0);
	while (nptr[i] && ft_isdigit(nptr[i]))
		result = result * 10 + (nptr[i++] - '0');
	return (sign * result);
}
