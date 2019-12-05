/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:51:30 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/02 12:46:43 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (char *)s;
	while (n > 0)
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
		n--;
	}
	return (0);
}
