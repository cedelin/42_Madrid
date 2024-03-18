/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanhern <juanhern@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:27:51 by juanhern          #+#    #+#             */
/*   Updated: 2024/02/11 23:17:00 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_fill_grid(int x, int y, int column, int row)
{
	if (column == 1 && (row == 1 || row == y))
		ft_putchar('A');
	if (column == x && x > 1 && (row == 1 || row == y))
		ft_putchar('C');
	if ((column == 1 || column == x) && (row > 1 && row < y))
		ft_putchar('B');
	if ((row == 1 || row == y) && (column > 1 && column < x))
		ft_putchar('B');
	if (row > 1 && row < y && column > 1 && column < x)
		ft_putchar(' ');
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
