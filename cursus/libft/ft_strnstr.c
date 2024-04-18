/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:55:37 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/18 21:39:39 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *f, size_t len)
{
	size_t	i;
	size_t	j;

	if (*f == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && f[j] && str[i + j] == f[j] && i + j < len)
		{
			j++;
			if (f[j] == '\0')
			{
				return ((char *)str + i);
			}
		}
		i++;
	}
	return (NULL);
}
