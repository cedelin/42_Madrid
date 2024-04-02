/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:27:57 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/01 13:27:57 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t	i;
	size_t	x;
	size_t len_max;
	size_t rest;

	rest = start - ft_strlen(s);
	if (rest > len)
		len_max = len;
	else
		len_max = rest;
	substr = (char *)malloc(len_max + 1);
	if (substr == 0)
		return (NULL);
	i = 0;
	x = 0;
	while(s[i])
	{
		if (i >= start && x < len)
		{
			substr[x] = s[i];
			x++;
		}
		i++;
	}
	substr[x] = 0;
	return (substr);
}