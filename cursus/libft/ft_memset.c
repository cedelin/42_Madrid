/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:28:23 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/04 17:41:37 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*ptr;
	unsigned char	x;

	ptr = (char *) s;
	x = (unsigned char) c;
	while (n > 0)
	{
		ptr[n -1] = x;
		n--;
	}
	return (s);
}
