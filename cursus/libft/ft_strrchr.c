/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:26:43 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/02 12:09:02 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	x = (unsigned char) c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == x)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
