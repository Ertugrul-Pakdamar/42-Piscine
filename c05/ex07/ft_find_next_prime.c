/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:44:27 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/20 16:54:45 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb <= 1)
		return (0);
	index = 2;
	while (index < nb)
	{
		if (nb % index == 0 && index != nb)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	index;

	index = nb;
	while (1)
	{
		if (ft_is_prime(index))
			return (index);
		index++;
	}
}
