/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:32:13 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/28 12:45:04 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_positive(int i)
{
	if (i < 0)
		return (0);
	else
		return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;

	if (!tab[1])
		return (1);
	index = 1;
	while (tab[index])
	{
		if (!is_positive(f(tab[index - 1], tab[index])))
			return (0);
		index++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	tab[4] = {1, 2, 3};
}
