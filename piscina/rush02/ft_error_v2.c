/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:27:14 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/24 23:28:52 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_error(int argc, char *str)
{
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (!(ft_is_number(str)))
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (ft_strlen(str) > 37)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	return (1);
}
