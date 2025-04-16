/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:11:23 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/16 11:15:45 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	index = 0;
	while (src[index])
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	return (dest);
}
