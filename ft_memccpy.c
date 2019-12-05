/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:16:56 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/06 03:48:06 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*dst;

	source = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!source && !dst)
		return (NULL);
	if (!source && n == 0)
		return (dst);
	while (*source && n > 0)
	{
		*dst = *source;
		if (*source == (unsigned char)c)
			return (dst + 1);
		dst++;
		source++;
		n--;
	}
	return (NULL);
}
