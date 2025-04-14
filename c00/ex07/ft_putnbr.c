/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:04:10 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 09:57:46 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int num)
{
	char	out;

	out = '0' + num;
	write(1, &out, 1);
}

void	ft_putnbr(int nb)
{
	int	min_int_modulo;

	if (nb <= 9 && nb >= 0)
	{
		ft_putnum(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= -9 && nb >= -2147483647)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else
	{
		min_int_modulo = nb % 10;
		nb /= 10;
		write(1, "-", 1);
		ft_putnbr(nb * -1);
		ft_putnum(min_int_modulo * -1);
	}
	write(1, "\n", 1);
}
