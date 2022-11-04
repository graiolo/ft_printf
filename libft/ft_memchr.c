/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:03:20 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 13:04:02 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		cur;
	char		*string;

	cur = 0;
	string = (void *)s;
	while (cur < n)
	{
		if (string[cur] == (char)c)
			return (&string[cur]);
		cur++;
	}
	return (NULL);
}
