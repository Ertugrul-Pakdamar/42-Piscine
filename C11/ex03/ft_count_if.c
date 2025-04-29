/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:18:14 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/28 12:30:59 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	index;
	int	count;

	(void)length;
	index = 0;
	count = 0;
	while (tab[index])
	{
		if (f(tab[index]))
			count++;
		index++;
	}
	return (count);
}
