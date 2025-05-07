/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:36:34 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/06 08:54:48 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# include "ft_bool.h"

typedef struct s_map
{
	char	**map_data;
	char	*charset;
	int		width;
	int		height;
	t_bool	is_valid;
}	t_map;

#endif