/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:44:00 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 16:20:15 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_control(int i, int row, int j, int col)
{
	if (i == 0 || i == row - 1)
	{
		if (j == 0 || j == col - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (j == 0 || j == col - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int col, int row)
{
	int	i;
	int	j;

	if (col <= 0 && row <= 0)
		return ;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_control(i, row, j, col);
			j++;
		}
		ft_putchar('\n');
		i++;
	}	
}
