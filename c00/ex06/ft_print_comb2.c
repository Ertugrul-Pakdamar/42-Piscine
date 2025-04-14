/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:45:10 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 09:59:18 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char out)
{
	write(1, &out, 1);
}

char	ft_helper(int num, int type)
{
	char	result;

	if (type == 0)
	{
		result = '0' + (num / 10);
	}
	else
	{
		result = '0' + (num % 10);
	}
	return (result);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_helper(a, 0));
			ft_putchar(ft_helper(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_helper(b, 0));
			ft_putchar(ft_helper(b, 1));
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
