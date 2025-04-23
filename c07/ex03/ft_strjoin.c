/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:28:05 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/22 19:01:01 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (dest[index1])
		index1++;
	index2 = 0;
	while (src[index2])
		dest[index1++] = src[index2++];
	dest[index1] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	index1;
	int	total;

	total = 0;
	index1 = 0;
	while (index1 < size)
	{
		total += ft_strlen(strs[index1]);
		index1++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		index1;
	int		total_len;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = ft_total_len(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	result[0] = '\0';
	index1 = 0;
	while (index1 < size)
	{
		ft_strcat(result, strs[index1]);
		if (index1 < size - 1)
			ft_strcat(result, sep);
		index1++;
	}
	return (result);
}
