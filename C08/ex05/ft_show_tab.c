/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:52:20 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/23 16:23:51 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		ft_putchar(str[index++]);
}

void	ft_putnbr(int nb)
{
	char	out;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	out = nb % 10 + '0';
	write(1, &out, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index1;

	index1 = 0;
	while (par[index1].str)
	{
		ft_putstr(par[index1].str);
		ft_putchar('\n');
		ft_putnbr(par[index1].size);
		ft_putchar('\n');
		ft_putstr(par[index1].copy);
		ft_putchar('\n');
		index1++;
	}
}
