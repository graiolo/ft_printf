/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:13:47 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 14:16:07 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t len, size_t n)
{
	if (len < n)
		return (len);
	return (n);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cur2;
	size_t	cur;

	cur2 = 0;
	cur = 0;
	if (!ft_strlen(little))
		return ((char *)big);
	len = ft_min(len, ft_strlen(big));
	while (big[cur] && &big[cur] != &big[len])
	{
		if (big[cur] != little[cur2])
		{
			cur -= cur2;
			cur2 = 0;
		}
		else
			cur2++;
		if (!little[cur2])
			return ((char *)(&big[cur - (ft_strlen(little) - 1)]));
		cur++;
	}
	return (NULL);
}
