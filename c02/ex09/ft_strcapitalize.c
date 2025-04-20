/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:31:27 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/14 14:26:09 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_alpha_or_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	is_new_word;

	index = 0;
	is_new_word = 1;
	while (str[index])
	{
		if (is_alpha_or_num(str[index]) == 1)
		{
			if (is_new_word == 1 && is_alpha(str[index]) == 1)
				str[index] = to_upper(str[index]);
			else
				str[index] = to_lower(str[index]);
			is_new_word = 0;
		}
		else
			is_new_word = 1;
		index++;
	}
	return (str);
}
