/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:36:36 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/19 19:43:23 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_match(char *str, char *to_find, int match_index)
{
	int	index;

	index = 0;
	while (to_find[index])
	{
		if (str[match_index + index] != to_find[index])
			return (0);
		index++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	if (to_find[0] == '\0')
		return (str);
	index = 0;
	while (str[index])
	{
		if (str[index] == to_find[0])
		{
			if (is_match(str, to_find, index))
				return (&str[index]);
		}
		index++;
	}
	return (0);
}
