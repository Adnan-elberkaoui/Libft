/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:46:03 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/30 09:30:16 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_words(char **m, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(m[i]);
		i++;
	}
	free(m);
}

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (word);
		while (s[i] && s[i] != c)
			i++;
		word++;
	}
	return (word);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static int	fill_words(char **m, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	pos;
	size_t	len_word;

	i = 0;
	pos = 0;
	while (i < words)
	{
		while (s[pos] && s[pos] == c)
			pos++;
		len_word = word_len(s + pos, c);
		m[i] = malloc(len_word + 1);
		if (!m[i])
			return (free_words(m, i), 0);
		ft_memcpy(m[i], s + pos, len_word);
		m[i][len_word] = '\0';
		pos += len_word;
		i++;
	}
	m[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**m;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	m = malloc((words + 1) * sizeof(char *));
	if (!m)
		return (NULL);
	if (!fill_words(m, s, c, words))
		return (NULL);
	return (m);
}
