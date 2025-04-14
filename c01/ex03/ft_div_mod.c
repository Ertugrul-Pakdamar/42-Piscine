/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:51:55 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/14 08:32:24 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void	ft_putnum(int num)
{
	char	a;

	a = '0' + num;
	write(1, &a, 1);
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 4;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	ft_putnum(div);
	ft_putnum(mod);
	return (0);
}
*/
