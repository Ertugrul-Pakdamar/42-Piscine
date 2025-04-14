/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 11:56:52 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 12:56:09 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	a_backup;

	a_backup = *a;
	*a = *b;
	*b = a_backup;
}
/*
void	ft_putnum(int num)
{
	char a;

	a = '0' + num;
	write(1, &a, 1);
}

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 6;
	ft_swap(&a, &b);
	ft_putnum(a);
	ft_putnum(b);
	return (0);
}
*/
