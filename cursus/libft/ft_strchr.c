/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:02:10 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/02 12:07:32 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char x;
	
	x = (unsigned char) c;
	while (*s || *s == x)
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
 