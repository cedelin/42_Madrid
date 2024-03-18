/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 05:36:34 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/19 00:07:20 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		resto;
	int		mod;

	resto = 0;
	mod = 0;
	mod = *a % *b;
	resto = *a / *b;
	*b = mod;
	*a = resto;
}
