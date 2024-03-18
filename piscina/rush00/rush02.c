/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:05:15 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/11 20:51:15 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_fill_grid(int x, int y, int column, int row)
{
	if (column == 1 || column == x)
	{
		if (row == 1)
			ft_putchar ('A');
		else if (row == y)
			ft_putchar ('C');
		else
			ft_putchar ('B');
	}
	else
	{
		if (row == 1 || row == y)
			ft_putchar ('B');
		else
			ft_putchar (' ');
	}
}

void	rush(int x, int y)
{
	int		column;
	int		row;

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
