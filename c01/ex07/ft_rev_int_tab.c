/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:25:04 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 15:57:15 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	while (index < size / 2)
	{
		swap = tab[index];
		tab[index] = tab[(size - 1) - index];
		tab[(size - 1) - index] = swap;
		index++;
	}
}
/*
void	ft_print_tab(int *tab, int size)
{
	int	index;
	char	a;

	index = 0;
	while (index < size)
	{
		a = '0' + tab[index];
		write(1, &a, 1);
		index++;
	}
}

int	main(void)
{
	int	tab[6] = {1, 6, 5, 4, 3, 7};

	ft_rev_int_tab(tab, 6);
	ft_print_tab(tab, 6);
	return (0);
}
*/
