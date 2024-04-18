/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:54:15 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/16 11:01:34 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*result;
	size_t	n;
	size_t	i;

	result = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		result[i] = str1[i];
		i++;
	}
	n = 0;
	while (str2[n] != '\0')
	{
		result[i + n] = str2[n];
		n++;
	}
	result[i + n] = '\0';
	return (result);
}
