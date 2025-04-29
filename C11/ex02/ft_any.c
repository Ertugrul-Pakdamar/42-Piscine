/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:16:54 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/28 12:17:21 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	index;

	index = 0;
	while (tab[index])
	{
		if (f(tab[index]))
			return (1);
		index++;
	}
	return (0);
}
