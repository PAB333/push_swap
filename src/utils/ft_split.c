/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:51 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/08 17:17:35 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	count_words(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	while (i < size -1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

static char	*get_word(char const *s, char c, int *i)
{
	int		start;
	int		end;
	char	*word;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, (char *)&s[start], end - start + 1);
	return (word);
}

static int	fill_words(char **result, char const *s, char c, int words)
{
	int		i;
	int		index;

	i = 0;
	index = 0;
	while (i < words)
	{
		result[i] = get_word(s, c, &index);
		if (!result[i])
		{
			while (i > 0)
				free(result[--i]);
			return (0);
		}
		i++;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c, words))
	{
		free(result);
		return (NULL);
	}
	return (result);
}
