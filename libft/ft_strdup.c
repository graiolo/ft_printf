/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:07:25 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 13:10:58 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char	s_len;
	char			*dest;

	s_len = ft_strlen(s);
	dest = (char *)malloc(++s_len);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, s_len);
	return (dest);
}
