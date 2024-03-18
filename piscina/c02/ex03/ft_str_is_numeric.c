/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:55:11 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/21 11:51:22 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	while (str[i])
	{
		is_num = 0;
		if (str[i] > 47 && str[i] < 58)
			is_num = 1;
		if (str[i] == '\0')
			is_num = 1;
		if (!is_num)
			return (0);
		i++;
	}
	return (1);
}
