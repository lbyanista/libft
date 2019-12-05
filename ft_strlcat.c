/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:04:19 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/06 00:29:24 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dlen;
	const char	*s;
	char		*d;
	size_t		n;

	s = src;
	n = size;
	if (!(d = dst) && n == 0)
		return (ft_strlen(s));
	while (*d && n--)
		d++;
	dlen = d - dst;
	if ((n = size - dlen) == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
