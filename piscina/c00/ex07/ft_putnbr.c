/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldev <caroldev@outlook.es>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 01:36:51 by caroldev          #+#    #+#             */
/*   Updated: 2024/03/05 02:31:20 by caroldev         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		c = nb * -1;
	}
	else
	{
		c = nb;
	}
	if (c / 10 != 0)
		ft_putnbr(c / 10);
	ft_putchar(c % 10 + 48);
}
