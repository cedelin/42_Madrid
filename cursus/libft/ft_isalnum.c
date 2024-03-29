/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:54:05 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/03/18 15:38:13 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if (x > 47 && x < 58)
		return (1);
	if ((x > 64 && x < 91) || (x > 96 && x < 123))
		return (1);
	return (0);
}
