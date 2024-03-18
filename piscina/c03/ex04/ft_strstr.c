/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:51:24 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/28 03:10:21 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		j = 0;
		while (str[i] && to_find[j] && str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}
