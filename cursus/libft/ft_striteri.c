/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:16:32 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/03/22 01:38:36 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void(*f)(unsigned int, char*))
{
    int i;
    while (s[])
    {
        f(i, s[i]);
    }
}

static int	ft_tolower2(int	i, char *c)
{
    (void) i;
	if (*c > 64 && *c < 91)
		return (*c + 32);
	return (*c);
}
