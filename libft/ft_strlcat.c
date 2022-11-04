/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:41:37 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 12:46:06 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			n;
	size_t			dlen;
	char			*d;
	const char		*s;

	n = size;
	d = dst;
	s = src;
	while (*d && n--)
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n-- == 0)
		return ((dlen + ft_strlen(src)));
	while (*s)
	{
		if (n)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = 0;
	return ((dlen + (s - src)));
}
