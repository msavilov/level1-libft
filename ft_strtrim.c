/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:04:20 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 22:52:38 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		++i;
	}
	return (0);
}

static char		*trim(char const *s1, int i, int j, int size)
{
	char	*res;
	int		k;

	res = (char*)malloc(sizeof(char) * (size) + 1);
	if (!res)
		return (NULL);
	k = 0;
	while (i < j)
	{
		res[k] = s1[i];
		++i;
		++k;
	}
	res[k] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int trim_count;
	int i;
	int len;
	int j;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	trim_count = 0;
	i = 0;
	while (s1[i] != '\0' && in_set(s1[i], set))
	{
		++i;
		++trim_count;
	}
	j = len;
	while (j > i && in_set(s1[j - 1], set))
	{
		--j;
		++trim_count;
	}
	return (trim(s1, i, j, len - trim_count));
}
