/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:34:44 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/10/26 13:58:01 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
		{
			return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
		}
	}
	return (0);
}
