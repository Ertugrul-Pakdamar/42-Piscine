/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:08:39 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/27 21:16:27 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*res;

	res = (int *)malloc(sizeof(int) * length);
	index = 0;
	while (index < length)
	{
		res[index] = f(tab[index]);
		index++;
	}
	return (res);
}
