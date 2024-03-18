/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanhern <juanhern@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:27:00 by juanhern          #+#    #+#             */
/*   Updated: 2024/02/11 20:51:20 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_fill_grid(int x, int y, int column, int row)
{
	if (column == 1 || column == x)
	{
		if (row == 1 || row == y)
			ft_putchar ('o');
		else
			ft_putchar ('|');
	}
	else
	{
		if (row == 1 || row == y)
			ft_putchar ('-');
		else
			ft_putchar (' ');
	}
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	column = 1;
	while (row <= y)
	{
		while (column <= x)
		{
			ft_fill_grid (x, y, column, row);
			column++;
		}
		row++;
		ft_putchar ('\n');
		column = 1;
	}
}
