/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:54:45 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 22:42:47 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t i;

	if (num == 0)
		return (0);
	i = 0;
	while (string1[i] && string2[i] && string1[i] == string2[i] && i < num - 1)
		++i;
	return ((unsigned char)string1[i] - (unsigned char)string2[i]);
}
