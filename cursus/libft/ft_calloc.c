/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:53:38 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/03/20 16:29:33 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t countelements, size_t sizebytes)
{
	size_t countmem;
	void *ptr;
	
	if (countelements == 0 || sizebytes == 0)
	{
		count = 1;
		size = 1;
	}
	countmem = countelements * sizebytes;
	ptr = malloc(countmem);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, countmem);
	return (ptr);
}