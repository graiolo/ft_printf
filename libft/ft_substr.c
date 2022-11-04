/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:20:25 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 18:40:35 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t s_len, size_t len)
{
	if (s_len > len)
		return (len);
	return (s_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	min;

	if (!s)
		return (NULL);
	if (start > (size_t)ft_strlen(s))
	{
		s1 = (char *)ft_calloc(1, sizeof(char));
		if (!s1)
			return (NULL);
		return (s1);
	}
	min = ft_min(ft_strlen(s) - start, len);
	s1 = (char *)ft_calloc(++min, sizeof(char));
	if (!s1)
		return (NULL);
	while (start)
	{
		start--;
		s++;
	}
	ft_strlcpy(s1, s, min);
	return (s1);
}
