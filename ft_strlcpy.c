/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:33:24 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/01 20:04:37 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	char		*l;

	s = src;
	d = dst;
	l = dst + size;
	while (*s && d < l)
		*d++ = *s++;
	if (d < l)
		*d = 0;
	else if (size > 0)
		d[-1] = 0;
	while (*s)
		s++;
	return (s - src);
}
