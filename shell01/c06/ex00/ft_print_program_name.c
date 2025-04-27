/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:59:34 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/20 17:12:02 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	(void)argc;
	index = 0;
	while (argv[0][index])
		write(1, &argv[0][index++], 1);
	write(1, "\n", 1);
	return (0);
}
