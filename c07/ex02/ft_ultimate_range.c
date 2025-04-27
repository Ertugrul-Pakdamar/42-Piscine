/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:15:37 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/26 14:00:44 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (-1);
	index = 0;
	while (index < max - min)
	{
		arr[index] = min + index;
		index++;
	}
	*range = arr;
	return (max - min);
}
