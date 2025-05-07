/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:38:23 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/06 09:23:40 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../includes/ft_map.h"
# include "../includes/ft_bool.h"
# include "../srcs/ft_atoi.c"
# include "../srcs/ft_itoa.c"
# include "../srcs/get_rows.c"

char	*ft_itoa(int nbr);
int		ft_atoi(const char *str);
int		get_row_length(char *map, int row_index);
int		get_row_count(char *map);
char	**get_map_with_rows(char *map);

#endif