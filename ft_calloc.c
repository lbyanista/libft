/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:01:43 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/10/27 20:48:08 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	cs;

	cs = (count * size);
	p = (char *)malloc(cs);
	if (!p)
		return (NULL);
	ft_bzero(p, cs);
	return (p);
}
