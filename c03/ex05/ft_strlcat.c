/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:16:28 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/26 13:22:47 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index1;
	unsigned int	index2;
	unsigned int	result;

	index1 = 0;
	index2 = 0;
	result = 0;
	while (dest[index1])
		index1++;
	while (src[result])
		result++;
	if (size <= index1)
		result += size;
	else
		result += index1;
	while (src[index2] && (index1 + 1) < size)
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = '\0';
	return (result);
}
