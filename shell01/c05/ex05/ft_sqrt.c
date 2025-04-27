/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:34:17 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/20 16:35:42 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 0;
	if (nb == 1)
		return (1);
	while (index <= nb / 2)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
