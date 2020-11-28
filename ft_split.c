/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:32:29 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 21:59:48 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_delim(char c, char d)
{
	return (c == d);
}

static int		count_words(const char *s, char d)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s && is_delim(*s, d))
			s++;
		if (*s && !is_delim(*s, d))
		{
			count++;
			while (*s && !is_delim(*tr, d))
				s++;
		}
	}
	return (count);
}

static char		*malloc_word(const char *s, char d)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && !is_delim(s[i], d))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && !is_delim(s[i], d))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && is_delim(*s, c))
			s++;
		if (*s && !is_delim(*s, c))
		{
			arr[i] = malloc_word(s, c);
			i++;
			while (*s && !is_delim(*s, c))
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
