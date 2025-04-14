/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:57:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 13:09:29 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
void	putnum(int num)
{
	char	a;

	a = '0' + num;
	write(1, &a, 1);
}

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	putnum(a);
	putnum(b);
	return (0);
}
*/
