/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 21:37:33 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 21:37:33 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 33 || str[index] > 126)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
