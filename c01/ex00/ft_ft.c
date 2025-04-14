/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:29:20 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 10:34:28 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
void	ft_putnbr(int nbr)
{
	char	a;
	char	b;

	a = '0' + nbr / 10;
	b = '0' + nbr % 10;
	write(1, &a, 1);
	write(1, &b, 1);
}

int	main(void)
{
	int	nbr;

	nbr = 5;
	ft_ft(&nbr);
	ft_putnbr(nbr);
	return (0);
}
*/
