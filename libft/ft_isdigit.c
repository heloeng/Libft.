/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:43:15 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/21 13:53:31 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Verifica se um caracter é um dígito numérico (0-9).
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
#include<stdio.h>
int main(void)
{
    char c;
    int result;

    c = '1';
    result = ft_isdigit(c);

    printf("%d\n", result);
}
*/