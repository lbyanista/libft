/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:55:30 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/10/28 22:41:29 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrevers(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*s;
	size_t		i;

	dest = (char *)dst;
	s = (const char *)src;
	i = len - 1;
	while (len--)
	{
		*(dest + i) = *(s + i);
		i--;
	}
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	if (len == 0 || (dest == NULL && source == NULL))
		return (dest);
	if (!ft_strncmp(dest, source, len))
		return (dest);
	if (dest < source)
		ft_memcpy(dest, source, len);
	else if (dest > source)
		ft_memrevers(dest, source, len);
	return (dest);
}
