/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:05:42 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/22 19:08:04 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	a_backup;

	a_backup = *a;
	*a = *b;
	*b = a_backup;
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
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
