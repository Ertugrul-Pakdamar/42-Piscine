/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:19:40 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/14 11:22:04 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}
/*
void	putnum(int num)
{
	char	a;
	char	b;

	a = '0' + num / 10;
	b = '0' + num % 10;
	write(1, &a, 1);
	write(1, &b, 1);
}

int	main(void)
{
	char	*str;

	str = "";
	putnum(ft_strlen(str));
}
*/
