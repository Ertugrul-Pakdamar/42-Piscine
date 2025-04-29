/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:00:00 by <your_login       #+#    #+#             */
/*   Updated: 2025/04/29 10:35:18 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	index;

	index = 0;
	while (charset[index])
	{
		if (c == charset[index])
			return (1);
		index++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (str[index] && is_separator(str[index], charset))
			index++;
		if (str[index] && !is_separator(str[index], charset))
		{
			count++;
			while (str[index] && !is_separator(str[index], charset))
				index++;
		}
	}
	return (count);
}

char	*extract_word(char *str, char *charset, int start)
{
	int		length;
	int		index;
	char	*word;

	length = 0;
	while (str[start + length] && !is_separator(str[start + length], charset))
		length++;
	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	index = 0;
	while (index < length)
	{
		word[index] = str[start + index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**return_words(char **words, int word_index)
{
	words[word_index] = NULL;
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		word_index;
	int		char_index;
	int		word_start;
	int		word_total;
	char	**words;

	word_index = 0;
	char_index = 0;
	word_total = count_words(str, charset);
	words = malloc(sizeof(char *) * (word_total + 1));
	if (!words)
		return (NULL);
	while (str[char_index])
	{
		while (str[char_index] && is_separator(str[char_index], charset))
			char_index++;
		if (str[char_index] && !is_separator(str[char_index], charset))
		{
			word_start = char_index;
			while (str[char_index] && !is_separator(str[char_index], charset))
				char_index++;
			words[word_index++] = extract_word(str, charset, word_start);
		}
	}
	return (return_words(words, word_index));
}
