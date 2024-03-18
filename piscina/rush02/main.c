/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:18:06 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/25 01:00:10 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!(ft_error(ac, av[1])))
			return (0);
		ft_engine("numbers.dict", av[1]);
	}
	else if (ac == 3)
	{
		if (!(ft_error(ac, av[2])))
			return (0);
		ft_engine(av[1], av[2]);
	}
}
