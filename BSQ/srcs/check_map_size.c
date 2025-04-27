/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:09:14 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/27 09:38:18 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
