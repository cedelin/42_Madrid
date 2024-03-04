/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <caroldev@outlook.es>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:00:23 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/03/04 16:40:23 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    char    c;

    if (n < 10)
    {
        c = n + 48;
        write(1, "0", 1);
        write(1, &c, 1);
        return ;
    }
    c = (n/10) + 48;
    write(1, &c, 1);
    c = n % 10 + 48;
    write(1, &c, 1);
}
void    ft_print_comb2(void)
{
    int chrono[2];

    chrono[0] = 0;
    while (chrono[0] < 99)
    {
        chrono[1] = chrono[0] + 1;
        while (chrono[1] < 100)
        {
            ft_putnbr(chrono[0]);
            write(1, " ", 1);
            ft_putnbr(chrono[1]);
            if (chrono[0] == 98 && chrono[1] == 99)
                write(1, ",\n", 2);
            else
                write(1, ", ", 2);
            chrono[1]++;
        }
        chrono[0]++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}