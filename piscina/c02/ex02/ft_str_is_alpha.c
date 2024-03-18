/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:15:17 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/21 11:44:24 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	int				is_alpha;

	i = 0;
	while (str[i])
	{
		is_alpha = 0;
		if (str[i] > 64 && str[i] < 91)
			is_alpha = 1;
		if (str[i] > 96 && str[i] < 123)
			is_alpha = 1;
		if (str[i] == '\0')
			is_alpha = 1;
		if (!is_alpha)
			return (0);
		i++;
	}
	return (1);
}
