/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 22:48:01 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/05 18:11:30 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	negative;

	{
		nbr = 0;
		negative = 0;
		i = 0;
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-')
			negative = 1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
		{
			nbr *= 10;
			nbr += (int)str[i] - '0';
			i++;
		}
		if (negative == 1)
			return (-nbr);
		else
			return (nbr);
	}
}
