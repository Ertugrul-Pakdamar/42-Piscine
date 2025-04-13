/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:07:42 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/13 20:07:43 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		if (src[index])
		{
			dest[index] = src[index];
		}
		else
		{
			dest[index] = '\0';
		}
		index++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*str;
	char	*dest;

	str = "Hello";
	strncpy(dest, str, 10);
	return (0);
}
*/
