/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:45:35 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/19 20:02:39 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	index = 0;
	while (src[index] && len + index < size - 1)
	{
		dest[len + index] = src[index];
		index++;
	}
	dest[len + index] = '\0';
	return (len + size);
}
