/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:33:57 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 12:35:35 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (len == 0 || dest == src)
		return (dest);
	d = (char *)dest;
	s = (const char *)src;
	while (--len)
		*d++ = *s++;
	*d = *s;
	return (dest);
}
