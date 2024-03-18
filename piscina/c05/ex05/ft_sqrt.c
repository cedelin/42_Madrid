/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:13:20 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/29 23:05:16 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		while (result * result <= nb)
		{
			if (result * result == nb)
				return (result);
			if (result > 46340)
				return (0);
			result++;
		}
	}
	return (0);
}
