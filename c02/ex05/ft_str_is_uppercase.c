/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:14:40 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/14 13:33:02 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 'A' || str[index] > 'Z')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
