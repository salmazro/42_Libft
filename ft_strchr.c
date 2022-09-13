/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:32:08 by salmazro          #+#    #+#             */
/*   Updated: 2022/02/20 17:49:34 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	j;

	j = (char) c;
	i = 0;
	if (c == 0)
	{
		return ((char *)s + ft_strlen((char *)s));
	}
	while (s[i])
	{
		if (s[i] == j)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
