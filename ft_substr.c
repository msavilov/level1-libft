/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:07:45 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 22:59:04 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		k;
	int		j;

	i = start;
	k = 0;
	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] != '\0' && k < (int)len)
		++k;
	str = (char*)malloc(sizeof(char) * k + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s[j + start] != '\0' && k > 0)
	{
		str[j] = s[j + start];
		++j;
		--k;
	}
	str[j] = '\0';
	return (str);
}
