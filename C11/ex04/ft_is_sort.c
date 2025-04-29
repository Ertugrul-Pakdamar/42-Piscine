/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:32:13 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/29 20:18:17 by epakdama         ###   ########.fr       */
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
	while (index < length)
	{
		if (is_positive(f(tab[index - 1], tab[index])))
			return (0);
		index++;
	}
	return (1);
}
