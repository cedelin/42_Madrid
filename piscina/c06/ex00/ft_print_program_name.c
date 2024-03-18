/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:58:58 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/29 02:14:12 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	y;

	y = 0;
	if (ac > 0)
	{
		while (av[0][y] != 0)
		{
			write(1, &av[0][y], 1);
			y++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
