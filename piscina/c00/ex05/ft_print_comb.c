/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:08:47 by caroldev          #+#    #+#             */
/*   Updated: 2024/03/04 00:54:26 by caroldev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	u = 48;
	while (u <= 55)
	{
		d = u;
		while (++d <= 56)
		{	
			c = d;
			while (++c <= 57)
			{
				write(1, &u, 1);
				write(1, &d, 1);
				write(1, &c, 1);
				if (u != 55 || d != 56 || c != 57)
					write(1, ", ", 2);
			}
		}
		u++;
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
