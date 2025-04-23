/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:20:04 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/23 15:51:02 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		index;

	res = NULL;
	res = malloc(sizeof(char) * (size + 1));
	index = 0;
	while (str[index])
	{
		res[index] = str[index];
		index++;
	}
	res[index] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			index;

	stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stocks == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		stocks[index].size = ft_strlen(av[index]);
		stocks[index].str = av[index];
		stocks[index].copy = ft_strcpy(av[index], stocks[index].size);
		index++;
	}
	stocks[index].size = 0;
	stocks[index].str = 0;
	stocks[index].copy = 0;
	return (stocks);
}
