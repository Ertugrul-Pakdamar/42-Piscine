/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:25:30 by epakdama          #+#    #+#             */
/*   Updated: 2025/04/21 11:24:28 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	if (n == 0)
		return (0);
	index = 0;
	while (s1[index] == s2[index] && s1[index] && s2[index] && index < n)
		index++;
	if (index == n)
		return (0);
	return (s1[index] - s2[index]);
}
