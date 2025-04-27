/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:52:32 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/27 20:49:37 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	read_test(char *filename)
{
	char	c[100];

	int fd, sz;
	fd = open(filename, O_RDONLY);
	sz = read(fd, &c, 150);
	c[sz] = '\0';
	printf("%s", c);
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	read_test(argv[1]);
}
