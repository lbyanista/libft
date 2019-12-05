/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:50:04 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/05 22:33:28 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1c;
	unsigned char	*s2c;

	s1c = (unsigned char*)s1;
	s2c = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((s1c[i] || s2c[i]) && i < n)
	{
		if (s1c[i] != s2c[i])
			return (s1c[i] - s2c[i]);
		if (!*s1c)
			break ;
		i++;
	}
	return (0);
}
