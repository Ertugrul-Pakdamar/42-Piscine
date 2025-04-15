/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:51:23 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/15 19:51:23 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	if (ft_strlen(s1) > ft_strlen(s2))
	{
		while (s1[index])
		{
			if (s1[index] != s2[index])
				return (s1[index] - s2[index]);
			index++;
		}
	}
	else
	{
		while (s2[index])
		{
			if (s1[index] != s2[index])
				return (s1[index] - s2[index]);
			index++;
		}
	}
	return (0);
}
