/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rows.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:48:15 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/06 09:33:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	get_row_length(char *map, int row_index)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (row_index > 0)
	{
		if (map[index] == '\n')
		{
			row_index--;
			index++;
		}
		index++;
	}
	while (row_index == 0)
	{
		if (map[index] != '\n')
			len++;
		else
			row_index--;
		index++;
	}
	return (len + 1);
}

int	get_row_count(char *map)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (map[index])
	{
		if (map[index] == '\n')
			result++;
		index++;
	}
	return (result + 1);
}

/*
	FIXME:	segfault veriyor
*/
char	**get_map_with_rows(char *map)
{
	char	**result;
	int		row_index;
	int		col_index;
	int		map_index;

	result = (char **)malloc(sizeof(char *) * get_row_count(map) + 1);
	row_index = 0;
	while (result[row_index])
	{
		result[row_index] = malloc(get_row_length(map, row_index) + 1);
		row_index++;
	}
	row_index = 0;
	col_index = 0;
	map_index = 0;
	while (result[row_index][col_index])
	{
		if (result[row_index][col_index])
		{
			row_index++;
			col_index = 0;
		}
		result[row_index][col_index] = map[map_index];
		col_index++;
		map_index++;
	}
	return (result);
}
