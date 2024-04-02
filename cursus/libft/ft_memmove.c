/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:25:09 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/02 11:51:28 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	l;
	
	if (dest == 0 && src == 0)
		return (NULL);
	if (src < dest)
	{
		l = len;
		while (l > 0)
		{
			l--;
			((unsigned char *)dest)[l] = ((unsigned char *)src)[l];
		}
	}
	else
	{
		l = 0;
		while (l < len)
		{
			((unsigned char *)dest)[l] = ((unsigned char *)src)[l];
			l++;
		}
	}
	return (dest);
}
