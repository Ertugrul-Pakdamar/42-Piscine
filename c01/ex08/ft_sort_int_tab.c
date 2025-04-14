/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:50:02 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 16:05:59 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	index;

	index = 0;
	while (index < size - 1)
	{
		if (tab[index] > tab[index + 1])
		{
			swap = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = swap;
			index = 0;
		}
		else
		{
			index++;
		}
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
	int	tab[8] = {1, 6, 9, 5, 8, 4, 3, 7};

	ft_sort_int_tab(tab, 8);
	ft_print_tab(tab, 8);
	return (0);
}
*/
