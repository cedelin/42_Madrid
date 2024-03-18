/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanhern <juanhern@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:52:05 by juanhern          #+#    #+#             */
/*   Updated: 2024/02/11 23:16:06 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_fill_grid(int x, int y, int column, int row)
{
	if (column == 1 && row == 1)
		ft_putchar('A');
	if (column == x && row == y && y > 1 && x > 1)
		ft_putchar('A');
	if (column == 1 && row == y && y > 1)
		ft_putchar('C');
	if (column == x && row == 1 && x > 1)
		ft_putchar('C');
	if ((row == 1 || row == y) && (column > 1 && column < x))
		ft_putchar('B');
	if ((column == 1 || column == x) && (row > 1 && row < y))
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
		ft_putchar('\n');
		column = 1;
	}
}
