/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 21:12:11 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 21:12:11 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	is_alpha;

	index = 0;
	is_alpha = 1;
	while (str[index])
	{
		if (str[index] > 'z' || str[index] < 'a')
		{
			if (str[index] > 'Z' || str[index] < 'A')
				is_alpha = 0;
		}
		index++;
	}
	return (is_alpha);
}
