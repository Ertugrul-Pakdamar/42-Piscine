/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:33:30 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/15 08:43:48 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len;

	index = 0;
	len = 0;
	while (src[len])
		len++;
	while (index <= size - 1)
	{
		if (size < len && index == size - 1)
		{
			dest[index] = '\0';
		}
		else
			dest[index] = src[index];
		index++;
	}
	return (len);
}
