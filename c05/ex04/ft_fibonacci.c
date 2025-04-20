/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:24:09 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/20 15:32:53 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	first;
	int	second;
	int	swap;
	int	n;

	first = 0;
	second = 1;
	n = 0;
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	while (n < index - 1)
	{
		swap = second;
		second = first + second;
		first = swap;
		n++;
	}
	return (second);
}
