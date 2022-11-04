/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:08:50 by graiolo           #+#    #+#             */
/*   Updated: 2022/10/11 14:10:36 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*vect;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	vect = (void *)malloc(nmemb * size);
	if (!vect)
		return (NULL);
	ft_bzero(vect, nmemb * size);
	return (vect);
}
