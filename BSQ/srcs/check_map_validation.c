/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:37:10 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/27 10:27:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_map_valid(char **map, char empty_space, char blocked_spaces)
{
	int		row_index;
	int		col_index;
	char	index;

	row_index = 0;
	while (map[row_index])
	{
		col_index = 0;
		while (map[row_index][col_index])
		{
			index = map[row_index][col_index];
			if (index != empty_space && index != blocked_spaces)
			{
				return (0);
			}
			col_index++;
		}
		row_index++;
	}
	return (1);
}

int	is_map_size_valid(char **map, int x, int y)
{
	int	row_index;
	int	col_index;

	row_index = 0;
	while (map[row_index])
	{
		col_index = 0;
		while (map[row_index][col_index])
		{
			col_index++;
		}
		row_index++;
	}
	if (row_index == x && col_index == y)
		return (1);
	else
		return (0);
}

int	is_map_info_valid(char *maps_first_line, t_map_info *map_info)
{
	int	index;
	int	map_size;

	index = 0;
	map_size = 0;
	while (maps_first_line[index] >= '0' && maps_first_line[index] <= '9')
	{
		map_size = (map_size * 10) + (maps_first_line[index] + '0');
		index++;
	}
	map_info.size = map_size;
	if (maps_first_line[index])
		map_info.empty_space = maps_first_line[index++];
	if (maps_first_line[index])
		map_info.blocked_space = maps_first_line[index++];
	if (map_size != 0 && map_info.empty_space && map_info.blocked_space)
		return (1);
	return (0);
}
