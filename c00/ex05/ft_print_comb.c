/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:52:08 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/10 13:41:27 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int num)
{
	char	out;

	out = '0' + num;
	write(1, &out, 1);
}

void	ft_print(int first_num, int second_num, int third_num)
{
	ft_print_int(first_num);
	ft_print_int(second_num);
	ft_print_int(third_num);
	if (first_num != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first_num;
	int	second_num;
	int	third_num;

	first_num = 0;
	while (first_num <= 7)
	{
		second_num = first_num + 1;
		while (second_num <= 8)
		{
			third_num = second_num + 1;
			while (third_num <= 9)
			{
				ft_print(first_num, second_num, third_num);
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}
