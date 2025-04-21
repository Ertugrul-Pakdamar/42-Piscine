/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:30:00 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/21 08:23:59 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	while (dest[index1])
		index1++;
	index2 = 0;
	while (src[index2] && index2 < nb)
	{
		dest[index1 + index2] = src[index2];
		index2++;
	}
	dest[index1 + index2] = '\0';
	return (dest);
}	
