/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:11:27 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/03/21 01:08:59 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t len;
	char *ptr;
	size_t i;
	
	len = ft_strlen(s1);
	ptr = (char *)malloc(len * sizeof(char));
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	else
		return ((char *)ptr);
}