/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:55:24 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/26 10:55:09 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
