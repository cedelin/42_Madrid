/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:53:38 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/04/04 17:37:31 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t countelements, size_t sizebytes)
{
	size_t	countmem;
	void	*ptr;

	if (countelements != 0 && SIZE_MAX / countelements < sizebytes)
		return (NULL);
	if (countelements == 0 || sizebytes == 0)
	{
		countelements = 1;
		sizebytes = 1;
	}
	countmem = countelements * sizebytes;
	ptr = malloc(countmem);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, countmem);
	return (ptr);
}
