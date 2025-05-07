/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:52:32 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/07 08:48:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO:
 * - check map validation
 * 	- check map width
 * 	- check map charset
 * 	- check map objects
 * - save map
*/

#include "../includes/bsq.h"

int	get_size_of_map(char *filename)
{
	int		len;
	char	buffer;
	int		fd;

	len = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &buffer, 1))
		len++;
	close(fd);
	return (len);
}

// *TODO	bu fonksiyon t_map türünde olmalı test için değiştirdim
char	*get_map(char *filename)
{
	char	*map_data;
	int		size_of_map;
	int		fd;

	fd = open(filename, O_RDONLY);
	size_of_map = get_size_of_map(filename);
	map_data = (char *)malloc(size_of_map * sizeof(char));
	read(fd, map_data, size_of_map);
	close(fd);
	return (map_data);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", get_map_with_rows(get_map(argv[1]))[1]);
	return (0);
}
