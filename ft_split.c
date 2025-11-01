/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:26:59 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/10/31 21:49:16 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_seep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (!is_seep(*s, c) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (is_seep(*s, c))
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(char *start, char *end)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = end - start;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **out, int j)
{
	while (j-- > 0)
		free(out[j]);
	free(out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	char	*start;
	int		j;

	j = 0;
	out = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	while (*s)
	{
		if (!is_seep(*s, c))
		{
			start = (char *)s;
			while (*s && !is_seep(*s, c))
				s++;
			out[j] = allocate_word(start, (char *)s);
			if (!out[j])
				return (free_all(out, j), NULL);
			j++;
		}
		else
			s++;
	}
	out[j] = NULL;
	return (out);
}
